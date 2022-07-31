#include<iostream>
#include<ctime>
#include<string>
#include<cstdio>
//#include<windows.h>
#include<unistd.h>
int main()
{
    int rows=4;
    int columns =9;
//    std::cout<<"Please input the scale of your chrismax tree\n1.rows: ";
//    std::cin>>rows;
//    std::cout<<"2.columns: ";
//    std::cin>>columns;
    int LHS = columns/2;
    int RHS = columns/2;
    for(int row = 0;row<rows;row++)
    {
        for(int column=0;column<columns;column++)
        {
            sleep(100);
            // std::cout<<" ";
            if(column>=LHS&&column<=RHS)
            {
                std::cout<<".";
            }
            else{
                std::cout << " ";
            }
        }
    std::cout<<std::endl;
        LHS--;
        RHS++;
    }
    return 0;
}