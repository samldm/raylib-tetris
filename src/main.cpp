#include <raylib.h>
#include "Game.h"

double lastUpdateTime = 0;
bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "My first RAYLIB program!");
    SetTargetFPS(60);
    
    Game game = Game();

    while (!WindowShouldClose())
    {
        game.HandleInput();
        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}