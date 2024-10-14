#include "hw/SubMatAdd.hpp"
#include <iostream>
#include <vector>

int main()
{
    int mat[5][4] = {{0, -2, -7, 0}, {9, 2, -6, 2}, {-4, 1, -4, 1}, {-1, 8, 0, -2}, {1, 2, 3, 4}};
    std::vector<std::vector<int>> matV;
    matV.resize(5, std::vector<int>(4));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matV[i][j] = mat[i][j];
        }
    }

    hw::SubMatAdd subMatAdd(matV);
    std::cout << subMatAdd.solve() << std::endl;
    subMatAdd.printMaxSubmatrix();
}