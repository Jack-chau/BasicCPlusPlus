#include<iostream>
#include<fstream> //file stream
#include<vector>  
int main ()
{
    std::ofstream file; //output file
    std::string filename;
    std::cout<<"Please input the file name:";
    std::cin>>filename;
    file.open(filename,std::ios::app);

    if (file.is_open())
    {
        std::cout<<"success \n";
    }
    //same as:
    // std::ofstream file ("Hello.txt");
    file<<"Hey";
    file<<std::endl;
    std::vector<std::string> names;
    names.push_back("Jack");
    names.push_back("Nicole");
    names.push_back("Candy");

    for (std::string name: names)
    {
        file<<name<<std::endl;
    }

    file.close();

    return 0;
}