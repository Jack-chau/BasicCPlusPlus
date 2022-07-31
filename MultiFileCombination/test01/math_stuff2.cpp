#include<iostream>
#include"math_utail2.h"

int main()
{
    Rectangle rectangle;
    rectangle.length =6;
    rectangle.width = 6;
    std::cout<<area(rectangle.length,rectangle.width)<<std::endl;
    std::cout<<area(rectangle.length)<<std::endl;
    std::cout<<area(rectangle)<<std::endl;
    return 0;
}