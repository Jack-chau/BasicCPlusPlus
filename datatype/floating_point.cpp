#include<iostream>
#include<float.h>

int main()
{
    float a = 10.0/3;
    double b = 10.0/3; //7.7E4 = 7.7x10^4
    long double c = 10.0/3;
    /*
    a = a*10000000;
    b = b*10000000000;
    c = c*10000000000;
    std::cout<<std::fixed<<a<<std::endl;
    std::cout<<std::fixed<<b<<std::endl;
    std::cout<<std::fixed<<c<<std::endl;
    */ 
   std::cout<<FLT_DIG<<std::endl;
   std::cout<<DBL_DIG<<std::endl;
   std::cout<<LDBL_DIG<<std::endl;
    return 0;
}