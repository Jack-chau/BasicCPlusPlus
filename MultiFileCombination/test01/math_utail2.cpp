#include<iostream>
#include"math_utail2.h"

double area (double length,double width)
{
    double total = length * width;
    return total;
}

double area (double length)
{
    double total = length * length;
    return total;
}

double area (Rectangle rectangle)
{
    double total = rectangle.length*rectangle.width;
    return total;
}




