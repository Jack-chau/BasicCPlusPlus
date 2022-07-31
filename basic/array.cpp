#include<iostream>

void print_arr (int arr[], int size)
{
     
    for (int i =0; i < size; i ++)
    {
        std::cout<<arr[i]<<std::endl;
    }

}


int main ()

{
    int array [] = {1,2,3,4,5,6};

    int size = sizeof(array) / sizeof(array[0]);
    print_arr(array,size);

    return 0;
}