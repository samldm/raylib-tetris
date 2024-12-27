#pragma once
#include "Grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandleInput();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();
    void RotateBlock();
    void LockBlock();
    void Reset();

    Grid grid;
    bool gameOver;

private:
    bool IsBlockOutside();
    bool DoBlockFits();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};