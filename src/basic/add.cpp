#include "basic/add.h"

int mtmath::add(int a, int b)
{
    return a + b;
}

float mtmath::add(float a, float b)
{
    return a + b;
}

char mtmath::add(char a, char b)
{
    char _ = '0';
    int mid = a - _;
    return b + mid;
}