#include<iostream>
int main()
{
    bool pizza_is_good = true;
    std::cout<<pizza_is_good<< std::endl;

    bool found = true;
    // search algorithm -> if found, found = true;
    // for output bool, use boolalpha
    std::cout<<std::boolalpha<<found<<std::endl;
    if(found)
    {
        std::cout<<"is found";
    }


    return 0; 
}