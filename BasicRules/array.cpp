#include<iostream>

void print_arr (int arr[], int size)
{
    std::cout<<size<<std::endl;

    for (int i = 0; i < size; i++ )
        {
            std::cout<<arr[i]<<" ";
        }
} 
int main ()
{
    int guesses[] = {12,43,23,43,23};
/*
    int num_elements =5;

    int size = sizeof(guesses) / sizeof(guesses[0]);

    std::cout<<size<<std::endl;
    for (int i =0; i < num_elements; i++)
        {
            std::cout<<guesses[i]<<"\t";
        }
*/
    int size = sizeof(guesses)/sizeof(guesses[0]);
    print_arr(guesses,size);
    return 0;
}