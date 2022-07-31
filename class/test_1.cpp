#include<iostream>
#include<string>
#include<vector>

class User
{
    std::string status = "Nobody";
    std::string Status()
    {
        return status;
    }

public:
    std::string first_name;
    std::string last_name;
};

int Add_user_if_not_exists (std::vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
users.push_back(user);
return users.size() -1;
}

int main ()
{
    User user1,user2,user3;
    user1.first_name = "Jack";
    user1.last_name = "chau";
    user2.first_name = "Nicole";
    user2.last_name = "chen";
    user3.first_name = "Tony";
    user3.last_name = "Sze";

    std::vector<User> users;
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user4;
    user4.first_name = "Joe";
    user4.last_name = "Lau";

    std::cout<<Add_user_if_not_exists(users,user4);
    std::cout<<std::endl;
    std::cout<<users.size();
    return 0;
}