#pragma once
#include <iostream>
#include <vector>
#include <raylib.h>

class Grid {
public:
    Grid();
    void Initialize();
    void Print();
    int grid[20][10];

private:
    std::vector<Color> GetCellColors();
    int numRow;
    int numColumn;
    int cellSize;
    std::vector<Color> colors;
};