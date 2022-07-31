#include<iostream>
#include"math_utail.h"
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