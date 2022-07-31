#include<iostream>
double power  (double base, int exponent)
{
    double result = 1;
        for (int i = 0; i < exponent; i++)
        {
            result = result * base;
        }

    return result;
}

void Print_power (double base,int exponent)
{
    double result = power(base,exponent);
    std::cout<<base<<" rised to the "<<exponent<< " power is "<< result <<std::endl;
}

int main ()
{
    double base;
    int exponent;
    std::cout<<"Please enter the base: ";
    std::cin>>base;
    std::cout<<"Please enter the exponent: ";
    std::cin>>exponent;
    Print_power(base,exponent);
    return 0;
}