#pragma once
#include <vector>
#include <map>
#include "Position.h"
#include "Colors.h"

class Block
{
public:
    Block();
    void Draw();
    void Move(int rows, int columns);
    void Rotate();
    void UndoRotate();
    std::vector<Position> GetCellPositions();

    int id;
    std::map<int, std::vector<Position>> cells;  

private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffset;
    int colOffset;
};