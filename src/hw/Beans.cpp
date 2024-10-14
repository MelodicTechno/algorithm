#include "hw/Beans.hpp"
#include <iostream>
#include <vector>

std::vector<int> dp;

hw::Beans::Beans(int n) : caseN(n) {};

int hw::Beans::memo(int n)
{
    dp = std::vector<int>(n + 1, -1);
    return helper(n);
}

int hw::Beans::helper(int n) {
    // base cases
    if (n == 0) return 1;
    if (n < 0) return 0;

    // memoization check
    if (dp[n] != -1) return dp[n];

    // store the result in dp array
    return dp[n] = helper(n - 1) + helper(n - 2) + helper(n - 3);
}

int hw::Beans::rec(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    return this->rec(n - 1) + this->rec(n - 2) + this->rec(n - 3);
}

void hw::Beans::show()
{
    this->memo(this->caseN);
    this->rec(this->caseN);
}