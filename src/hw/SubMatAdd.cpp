#include "hw/SubMatAdd.hpp"
#include <algorithm>
#include <limits>
#include <iostream>

hw::SubMatAdd::SubMatAdd() : dp(4, 0), maxValue(std::numeric_limits<int>::min()), top(0), left(0), bottom(0), right(0)
{
    int mat[4][4] = {{0, -2, -7, 0}, {9, 2, -6, 2}, {-4, 1, -4, 1}, {-1, 8, 0, -2}};
    // std::vector<std::vector<int>> matVec;
    this->testMat.resize(4, std::vector<int>(4));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            this->testMat[i][j] = mat[i][j];
        }
    }
}

hw::SubMatAdd::SubMatAdd(std::vector<std::vector<int>> mat) : dp(mat[0].size(), 0), maxValue(std::numeric_limits<int>::min()), top(0), left(0), bottom(0), right(0)
{
    int rn = static_cast<int>(mat.size());
    int cn = static_cast<int>(mat[0].size());
    this->testMat.resize(rn, std::vector<int>(cn));

    for (int i = 0; i < rn; i++)
    {
        for (int j = 0; j < cn; j++)
        {
            this->testMat[i][j] = mat[i][j];
        }
    }
}

int hw::SubMatAdd::solve()
{
    int rn = static_cast<int>(this->testMat.size());
    int cn = static_cast<int>(this->testMat[0].size());

    for (int left = 0; left < cn; left++)
    {
        // Temp array for row sums
        std::vector<int> temp(rn, 0);

        for (int right = left; right < cn; right++)
        {
            // Calculate the sum of each row between left and right columns
            for (int i = 0; i < rn; i++)
            {
                temp[i] += this->testMat[i][right];
            }

            // Apply Kadane’s algorithm on the temp array
            int currentMax = std::numeric_limits<int>::min();
            int currentSum = 0;
            // Start index for the maximum sum subarray
            int start = 0;

            for (int i = 0; i < rn; i++)
            {
                currentSum += temp[i];

                if (currentSum > currentMax)
                {
                    currentMax = currentSum;
                    top = start;
                    bottom = i;
                    left = left;
                    right = right;
                }

                if (currentSum < 0)
                {
                    currentSum = 0;
                    start = i + 1;
                }
            }

            // Update maxValue with the currentMax found
            maxValue = std::max(maxValue, currentMax);
        }
    }
    return maxValue;
}

void hw::SubMatAdd::printMaxSubmatrix()
{
    std::cout << "Submatrix Coordinates: [(" << top << ", " << left << "), (" << bottom << ", " << right << ")]" << std::endl;
}