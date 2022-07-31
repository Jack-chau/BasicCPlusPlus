#include<iostream>
#include<fstream>
#include<vector>
#include<array>
int main ()
{
    std::string filename;
    std::cout<<"file name: ";
    std::cin>>filename;
    std::ofstream file_01 (filename.c_str(),std::ios::app);

    if (file_01.is_open())
    {
        std::cout<<"The file was open successfully! \n";
    }else
    {
        std::cout<<"The file doesn't exist!";
    }

    file_01<<"Here is file_01\n";
    std::vector<std::string> names;
    names.push_back("Jack");
    names.push_back("Nicole");
    names.push_back("Ben");
    for (std::string name : names)
    {
        file_01<<name<<std::endl;
    }
    file_01.close();
    return 0;
}