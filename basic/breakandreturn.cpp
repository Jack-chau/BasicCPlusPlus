#include<iostream>
int main ()
{
    std::string abc ="my name is jack";
    
    for (int i = 0; i < abc.size(); i++)
        {
        std::cout<<abc[i];
            if (abc[i] == 's')
            {
                break;
            }
        }
    return 0;
}