#include <iostream>
#include <raylib.h>
#include "grid.h"



int main () {
    Color purple = {255, 0, 255, 255};
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(purple);
        EndDrawing();

    }

    CloseWindow();
}

