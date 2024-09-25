#include <iostream>
#include <raylib.h>



int main () {
    Color purple = {255, 0, 255, 255};
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);
    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(purple);
        EndDrawing();

    }

    CloseWindow();
}