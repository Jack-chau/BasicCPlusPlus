#include<iostream>
int main ()
{

    int answer = 3;
    int guess;
    std::cout<<"Please answer: "<<std::endl;
    std::cin>>guess;
    
    guess == answer ? std::cout<<"you did a good job\n" : std::cout<<"you did a bad job";

    return 0;
}