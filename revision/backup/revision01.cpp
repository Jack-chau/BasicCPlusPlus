#include<iostream>
#include<vector>
#include<string>

class User
{
public:
    std::string first_name;
    std::string last_name;
    User (std::string first, std::string second)
    {
        this -> first_name = first;
        this -> last_name = second;
    }
};
int main ()
{
    User user("Jack","Chau");
    std::cout<<user.first_name<<" "<<user.last_name<<std::endl;
    return 0;
}