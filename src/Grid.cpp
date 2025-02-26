#include "grid.h"

Grid::Grid () {
    numRow = 20;
    numColumn = 10;
    cellSize = 30;
    Initialize();
}

void Grid::Initialize() {
    for(int row = 0; row < numRow; row++) {
        for(int column = 0; column < numColumn; column ++) {
            grid[row][column] = 0;
        }
    }
}

void Grid::Print() {
    for(int row = 0; row < numRow; row++) {
        for(int column = 0; column < numColumn; column ++) {
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<Color> Grid::GetCellColors(){
    Color 
}