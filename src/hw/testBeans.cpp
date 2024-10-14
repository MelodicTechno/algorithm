#include <iostream>
#include "hw/Beans.hpp"

int main()
{
    hw::Beans beansTest(5);
    int ans = beansTest.rec(5);
    std::cout << ans << std::endl;
}