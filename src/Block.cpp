#include "Block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    rowOffset = 0;
    colOffset = 0;
    colors = GetCellColors();
}

void Block::Draw()
{
    std::vector<Position> tiles = GetCellPositions();
    for (Position item : tiles)
    {
        DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int columns)
{
    rowOffset += rows;
    colOffset += columns;
}

void Block::Rotate()
{
    rotationState++;
    if (rotationState >= (int) cells.size())
        rotationState = 0;
}

void Block::UndoRotate()
{
    rotationState--;
    if (rotationState < 0)
        rotationState = cells.size() - 1;
}

std::vector<Position> Block::GetCellPositions()
{
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;

    for(Position item : tiles)
    {
        Position newPos = Position(item.row + rowOffset, item.col + colOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}