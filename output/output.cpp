#include<iostream>
#include<fstream>
#include<vector>

int main()
{
    std::ifstream inputfile ("file_01");
    std::vector<std::string> names;
    std::string input;
    while(inputfile>>input)
    {
        names.push_back(input);
    }

    for(std::string name:names)
    {
        std::cout<<name<<std::endl;
    }

    return 0;
}