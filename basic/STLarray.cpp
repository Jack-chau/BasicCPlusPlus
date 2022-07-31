#include<iostream>
#include<cstdlib>
#include<array>

void print_arr (std::array<int,20> array,int size)
{
    for (int i = 0; i <size; i++)
    {
        std::cout<<array[i]<<std::endl;
    }
}


int main ()
{
    std::array<int,20> data = {1,2,3};
    print_arr (data, 3);

    return 0;
}