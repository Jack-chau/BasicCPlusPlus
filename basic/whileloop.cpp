#include<iostream>
int main ()
{
/*
    for (int i =0;i<10;i++)
    {
        std::cout<<i<<std::endl;
    }

    int i = 0;
    while (i<10)
    {
        std::cout<<i<<std::endl;
        i ++;
    }
*/

int factorial = 5;
int i = factorial - 1;
    while(i > 0)
    {
        factorial *= i;
        i--;
    }
std::cout<<factorial<<std::endl;
    return 0;
}