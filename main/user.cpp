#include<iostream>
#include<string>
#include<vector>
#include"user.h"
#include"teacher.h"

    int User::get_user_count()
    {
        return user_count;
    }
    std::string User::get_status()
    {
        return status;
    }

    void User::set_status(std::string status)
    {
        if(status == "Good" || status == "Notbad" || status == "Bad")
        {
            this -> status = status;
        }else{
            this ->status = "No such status";
        }
    }
    User::User()
    {
        user_count++;
    }
    User::User (std::string name, std::string userid, std::string status)
    {
        this -> first_name = name;
        this -> last_name = userid;
        this -> status = status;
        user_count++;
    }
    User::~User ()
    {
        //std::cout<<"Distructor\n";
        user_count--;
    }
    void User::output()
    {
        std::cout<<"I am a user\n";
    }
    void output_status (User user); // for private data
    std::ostream& operator << (std::ostream& output, const User user);
    std::istream& operator >> (std::istream &input, User &user);

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

int add_user (std::vector<User> &users , User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name && users[i].last_name== user.last_name)
        {
            return i;
        }
    }
users.push_back(user);
return users.size() -1;
}

int User::user_count =0;