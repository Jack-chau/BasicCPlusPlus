#include<iostream>
#include"math_utail.h"

int main()
{
    Rectangle rectangle_A;
    rectangle_A.length = 10;
    rectangle_A.width = 10;
    std::cout<<area(rectangle_A.length,rectangle_A.width);
    std::cout<<std::endl;
    std::cout<<area(rectangle_A.length)<<std::endl;
    std::cout<<area(rectangle_A)<<std::endl;
    std::cout<<base(3);
    return 0;
}