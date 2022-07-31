#include<iostream>
#include<string>
#include<vector>
class User
{
    std::string status = "Gold";
    public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
    User (std::string first_name, std::string last_name)
    {
        this -> first_name = first_name;
        this -> last_name = last_name;
    }
};
    int add_user (std::vector<User> &users, User new_user)
    {
        for (int i=0; i < users.size(); i++)
        {
            if (users[i].first_name == new_user.first_name && users[i].last_name == new_user.last_name)
            {
                return i;
            }
        }
    users.push_back(new_user);
    return users.size() -1;
    }

int main ()
{
    std::vector<User> users;
    User user1 ("Jack", "Chau");
    User user2 ("Tony", "Gor");
    users.push_back(user1);
    users.push_back(user2);
    User user3 ("User","3");
    std::cout<<add_user(users,user3)<<std::endl;
    std::cout<<users.size()<<std::endl;
    return 0;
}