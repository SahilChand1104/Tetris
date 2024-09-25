#pragma once //used so its only used once

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    int grid[20][10];

private:
    int rows;
    int cols;
    int cellSize;

};