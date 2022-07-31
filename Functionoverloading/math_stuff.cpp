#include<iostream>

struct Rectangle
{
    double length;
    double width;
};

double area (double length, double width)
{
    return length * width;
}

double area (double length)
{
    return length * length;
}

double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle retangle;
    retangle.length = 10;
    retangle.width = 5;

    std::cout<<area(retangle.length,retangle.width)<<std::endl;
    std::cout<<area(retangle.length)<<std::endl;
    std::cout<<area(retangle)<<std::endl;

    return 0;
}
