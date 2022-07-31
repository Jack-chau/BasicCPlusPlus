#include<iostream>
#include<cmath>
int main()
{
    // NAN = not a number
    // inf = infinity
    std::cout<<sqrt(25)<<std::endl;
    std::cout<<remainder(10,3)<<std::endl;
    std::cout<<10 % 3<<std::endl;

    // modulus only output integer;
    //std::cout<<10 % 3.25<<std::endl;

    //remainder and fmod is similar
    std::cout<<remainder(10,3.25)<<std::endl;
    std::cout<<fmod(10,3.25)<<std::endl;

    //fmax give the highest number in the argument, which is 10
    std::cout<<fmax(10,3.25)<<std::endl;
    //fmin give the minimum number in the argumnet, which is 3.25
    std::cout<<fmin(10,3.25)<<std::endl;

    //ceil is rise the number to an integer and floor is lower the value
    std::cout<<ceil(fmin(10,3.25))<<std::endl;
    std::cout<<floor(fmin(10,3.25))<<std::endl;
    std::cout<<trunc(fmin(10,3.25))<<std::endl; //trunc:截斷, crop the point.
    std::cout<<trunc(-3.256)<<std::endl; //-3. crop
    std::cout<<round(-3.49)<<std::endl; // round down to -3.0
    std::cout<<round(-3.51)<<std::endl; // round up to -4.0

    int number = 1;
    int base = 10;
    for(;number < base;number++)
    {
        int result;
        result = number % base;
        std::cout<<result<<std::endl;
    }

    return 0;
}