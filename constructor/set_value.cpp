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
    User ()
    {
        
    }
    void set_status (std::string status)
    {
        if (status == "Gold" || status == "Silver" || status == "Green")
        {
            this ->status = status;
        }
        else
        {
            this ->status = "No status";    
        }
    }
};
int main ()
{
    User user;

    // the status was assigned in the class fucntion;
    std::cout<<user.get_status()<<std::endl;

    // Use set_value function the assign another variable;
    user.set_status("Silver");
    // Use the get.valus function the get the variable that assigned by the set.function
    std::cout<<user.get_status()<<std::endl;  
    user.set_status("IDK");
    std::cout<<user.get_status()<<std::endl;
    return 0;

}