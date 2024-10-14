#include <iostream>
#include "hw/Beans.hpp"

int main()
{
    hw::Beans beansTest(5);
    for (int i = 1; i < 20; i++)
    {
        std::cout << "input: " << i << std::endl;
        std::cout << "recurssive way: " << beansTest.rec(i) << std::endl;
        std::cout << "memoization way: " << beansTest.memo(i) << std::endl;
        std::cout << "iterative way: " << beansTest.it(i) << std::endl;
    }
}