#include <iostream>
#include <raylib.h>
#include "grid.h"




int main () {
    Color purple = {255, 0, 255, 255};
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.Print();

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(purple);
        grid.Draw();

        EndDrawing();

    }

    CloseWindow();
}

