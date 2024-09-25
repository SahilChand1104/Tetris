#pragma once //used so its only used once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[20][10];

private:
    std::vector<Color> GetCellColors();
    int rows;
    int cols;
    int cellSize;
    std::vector<Color> colors;
    

};