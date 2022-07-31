#include<iostream>
#include<string>
#include<vector>

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
    void set_status (std::string status)
    {
        if (status == "Good" || status == "NotGood")
        {
            this -> status = status;
        }else
        {
            this -> status = "Not a status";
        }
    }

    /*
    User ()
    {
        std::cout<<"constructed";
    }
    ~User()
    {
        std::cout<<"Disconstructed\n";
    }
    /*
    User(std::string first_name, std::string last_name, std::string status)
    {
        this -> first_name = first_name;
        this -> last_name = last_name;
        this -> status = status;
    }
    */

};
    int add_user_if_not_exists (std::vector<User> &users, User new_user)
    {
        for (int i=0; i < users.size(); i++)
        {
            if(users[i].first_name == new_user.first_name && users[i].last_name == new_user.last_name)
            {
                return i;
            }
        }
    users.push_back(new_user);
    return users.size();
    }

class Position
{
    public:
    int x = 10;
    int y = 20;
    
    Position operator + (Position pos)
    {
    Position new_pos;
    new_pos.x = x + pos.x;
    new_pos.y = y + pos.y;
    return new_pos;
    }
    bool operator == (Position pos)
    {
        if (x == pos.x)
        {
            return true;
        }else
        {
            return false;
        }
    }
};

int main ()
{
    /*
    std::vector<User> users;
    User userA, userB, userC;
    userA.first_name = "Jack";
    userA.last_name = "Chau";
    userB.first_name = "Today";
    userB.last_name = "Kum";
    users.push_back(userA);
    users.push_back(userB);
    userC.first_name = "Samuel";
    userC.last_name = "Sue";
//    std::cout<<users.size()<<std::endl;
    std::cout<<add_user_if_not_exists(users,userC)<<std::endl;
    std::cout<<users.size()<<std::endl;
    */
    
    Position pos1,pos2;
    Position pos3 = pos1 + pos2;
    std::cout<<pos3.x<<std::endl;
    if (pos1.x == pos2.x)
    {
        std::cout<<"They are the same";
    }else
    {
        std::cout<<"added";
    }


    
    return 0;

}