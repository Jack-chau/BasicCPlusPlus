#include<iostream>
#include<vector>

int main()
{ 
    int rows = 3;
    int columns = 3;
    int grades_1 [] ={1,2,3};
/*
    int grades_2 [rows][columns] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}};
*/
    std::vector<std::vector<int>> grades_2 =
    {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

//print multiple dimention array

    for (int r = 0; r < rows; r++ )
    {

        for (int c = 0; c < columns; c++)
        {
            std::cout<<grades_2[r][c]<<"\t";
        }
        std::cout<<"\n";
    }


    return 0;
}