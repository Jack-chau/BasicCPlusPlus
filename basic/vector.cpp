#include<iostream>
#include<string>
#include<vector>

void print_vector (std::vector<int> data)
{
    for (int i = 0; i < data.size(); i++)
        {
            std::cout<<data[i]<<"\t";
        }
    std::cout<<"\n";
}
int main()
{
/*
    std::vector<int> data = {1,2,3};
    data.push_back(4);
    std::cout<<data[0]<<std::endl; // grep vector data by sclicingh
    std::cout<<data[data.size() -1]<<std::endl; // grap the last element inside the vector
    data.pop_back(); // remove the last element, which is 4
    std::cout<<data.size()<<std::endl;
*/

// New vector;
   
    std::vector<int> data = {1,2,3};
    print_vector(data);


    return 0;
}