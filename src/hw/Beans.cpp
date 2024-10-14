#include "hw/Beans.hpp"
#include <iostream>

hw::Beans::Beans(int n) : caseN(n) {};

int hw::Beans::memo(int n)
{
    return 0;
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