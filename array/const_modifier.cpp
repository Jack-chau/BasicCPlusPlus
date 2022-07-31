#include<iostream>

void print_arr (int array[],int size)
{
    for (int r = 0; r <size; r++)
    {
        std::cout<<array[r];
    }
}

int main()
{
    int size =3;
    int data [size] = {1,2,3};
    print_arr(data, size);
    return 0;
}