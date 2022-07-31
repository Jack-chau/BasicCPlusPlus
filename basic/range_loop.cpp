#include<iostream>
#include<string>
#include<cstdlib>
#include<array>

int main ()
{
    int data[] ={1,2,3,4,5,6};

    for (int i : data)
    {
        std::cout<<i<<std::endl;
    }

    return 0;
}