#include<iostream>
#include<vector>
#include<string>
#include<fstream>

int main()
{
    std::ifstream file ("jack.name.txt");
    if (file.is_open())
    {
        std::cout<<"The file open successfully ~!"<<std::endl;
    }else
    {
        std::cout<<"No such file!!!";
    }

    std::vector<std::string> name_list; 
    std::string input;
    while(file>>input)
    {
        name_list.push_back(input);
    }

    for (std::string name : name_list)
    {
        std::cout<<name<<std::endl;
    }

// print the first line:
    std::string line;
    getline(file,line);
    std::cout<<line<<std::endl;

    return 0;
}