// range base forloop
#include<iostream>
#include<vector>
#include<array>
#include<cstdlib>

int main ()
{

    std::vector<int> data = {1,2,3,4,5,6};

    for (int n : data)
        {
            std::cout<<n<<"\t";
        }


/*
    for (int i = 0; i < 6; i++)
        {
            std::cout<<data[i]<<"\t";
        }
    std::cout<<std::endl;
*/
    return 0;
}