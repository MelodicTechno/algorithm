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

int hw::Beans::it(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;

    int tmp1 = 4;
    int tmp2 = 2;
    int tmp3 = 1;
    int cur = 4;
    for (int i = 4; i <= n; i++)
    {
        cur = tmp1 + tmp2 + tmp3;
        tmp3 = tmp2;
        tmp2 = tmp1;
        tmp1 = cur;
    }
    return cur;
}
