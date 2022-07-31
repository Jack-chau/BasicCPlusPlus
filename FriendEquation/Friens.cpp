#include<iostream>
#include<string>
class User
{
    std::string status = "Gold";
    public:
    std::string first_name;
    std::string last_name;
    std::string get_status ()
    {
        return status;
    }
    friend void output_status (User user); // for private data
    friend std::ostream& operator << (std::ostream& output, const User user);
    friend std::istream& operator >> (std::istream &input, User &user);
};

void output_status (User user)
{
    std::cout << user.status;
}

std::ostream& operator << (std::ostream& output, const User user)
{
    output<<"First name: "<<user.first_name<<"\nLast name: "<<user.last_name<<std::endl
    <<"status: "<<user.status<<std::endl;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name;
    return input;
}
int main ()
{
    User user;
    std::cin>>user;
    std::cout<<user<<std::endl;

    return 0;
}