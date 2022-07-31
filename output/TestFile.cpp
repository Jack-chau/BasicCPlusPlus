#include<iostream>
#include<fstream>
#include<vector>

int main ()
{
    std::string filename;
    std::cout<<"please input the file name: ";
    std::cin>>filename;
    std::ofstream file_01 (filename.c_str(),std::ios::app);
    std::vector<std::string> name_arr;
    name_arr.push_back("Jack");
    name_arr.push_back("Nicole");
    name_arr.push_back("Tony");

    for (std::string name:name_arr)
    {
        file_01<<name<<std::endl;
    }

    file_01.close();    

    return 0;
}