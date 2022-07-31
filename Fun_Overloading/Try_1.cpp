#include<iostream>

struct Rectangle
{
    double length;
    double width;
};

double area (double length, double width)
{
    double area = length*width;
    return area;
} 

double area (double length)
{
    double area = length *length;
    return area;
}

double area (Rectangle rectangle)
{
    return rectangle.length*rectangle.width;
}

double pow (double base, int pow)
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

double base (int base)
{   
    int total = base * base; 
    return total;
}

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