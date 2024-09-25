#pragma once //used so its only used once

class Grid
{
public:
    Grid();
    int grid[20][10];

private:
    int rows;
    int cols;
    int cellSize;
}