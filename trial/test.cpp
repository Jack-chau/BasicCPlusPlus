#include<iostream>


int main()
{
    int columns =5;
    int rows =5;
    for (int row =0;row<rows;row++)
    {
        for(int column =0;column<columns;column++)
        {
            std::cout<<column;
        }
        std::cout<<std::endl;
    }
    return 0;
}