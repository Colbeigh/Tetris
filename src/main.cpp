#include <iostream>
#include "grid.h"
#include <raylib.h>
using namespace std;

int main(){
    Color random = {32, 86, 72, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();
    
    while (WindowShouldClose() == false) 
    {
        BeginDrawing();
        ClearBackground(random);
        EndDrawing();
    }


    CloseWindow();
}