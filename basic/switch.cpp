#include<iostream>
#include<string>
#include<cmath>
int main ()
{
    enum class Season {summer, spring, winter, fall};
    Season now = Season::winter;

    int age;
//    std::cout<<"Guess my age !\n";
//   std::cin>>age;

    switch (age)
    {
        case 13:
            std::cout<<" Your age is 13, Wow! \n";
            break;
        case 14:
            std::cout<<" Your age is 14 !\n";
            break;
        case 15:
            std::cout<<"Your age is 15. still young";
            break;
        default:
        std::cout<<"Catch all \n";
        break;
    }
    
    switch (now)
    {
        case Season::summer:
            std::cout<<"Now is summer !\n";
            break;
        case Season::spring:
            std::cout<<"Now is spring \n";
            break;
        case Season::winter:
            std::cout<<"Now is winter";
            break;
        case Season::fall:
            std::cout<<"Now snow fall!";

        default:
        break;

    }


    return 0;
}