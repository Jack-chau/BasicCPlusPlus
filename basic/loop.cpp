#include<iostream>
#include<string>
int main ()
{
/*
    for (int i = 0; i <10; i++)
        {
            std::cout<<i<<std::endl;
        }
*/
int factorial = 5;
    for(int i = factorial -1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    std::cout<<factorial<<std::endl;
    return 0;
}