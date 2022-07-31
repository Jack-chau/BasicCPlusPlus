#include<iostream>
#include<cstdlib>
#include<string>
#include<limits>
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}

int main ()
{
    const int SIZE = 100;
    int guesses[SIZE];
    int count = 0;

    std::cout<<"Please input the array \n";
    for (int i =0; i <SIZE; i++)
    {
        if (std::cin>>guesses [i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    std::cout<<std::endl;
    print_arr(guesses,count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::string string;
    std::cout<<"Please input the string \n";
    std::cin>>string;
    std::cout<<string<<"\n";

    return 0;
}