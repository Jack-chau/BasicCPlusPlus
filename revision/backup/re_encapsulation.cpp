#include<iostream>
#include<string>
#include<vector>

class User
{
    static int user_count;
    std::string status = "Notgood";    
    public:
    static int get_user_count()
    {
        return user_count;
    }
    std::string name;
    std::string userid;
    std::string get_status()
    {
        return status;
    }

    void set_status(std::string status)
    {
        if(status == "Good" || status == "Notbad" || status == "Bad")
        {
            this -> status = status;
        }else{
            this ->status = "No such status";
        }
    }
    User()
    {
        user_count++;
    }
    User (std::string name, std::string userid, std::string status)
    {
        this -> name = name;
        this -> userid = userid;
        this -> status = status;
        user_count++;
    }
    ~User ()
    {
        //std::cout<<"Distructor\n";
        user_count--;
    }
};

int add_user (std::vector<User> &users , User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].name == user.name && users[i].userid== user.userid)
        {
            return i;
        }
    }
users.push_back(user);
return users.size() -1;
}

int User::user_count =0;


int main ()
{
    std::vector<User> users;
    User user1, user2;
    user1.name = "Jack";
    user1.userid = "123";
    user2.name="Tony";
    user2.userid = "456";
    users.push_back(user1);
    users.push_back(user2);
    User user3;
    user3.name = "Today";
    user3.userid = "789";
    std::cout<<users.size()<<std::endl;
    std::cout<<add_user(users,user3)<<std::endl;
    std::cout<<users.size()<<std::endl;
    return 0;
} 