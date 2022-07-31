#include<iostream>
#include<string>
int main()
{
    // Do loop at least one
    std::string Password = "Jack123Jack123";
    std::string input;
    do
    {
        std::cout<<"Please enter the password \n";
        std::cin>>input;
    }while(input != Password); 

    return 0;
}