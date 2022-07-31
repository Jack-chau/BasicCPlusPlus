#include<iostream>
#include<string>

class User
{
    static int user_count; // create a static data
    std::string status = "Gold";


    public:
        static int get_user_count()
        {
            return user_count;
        }
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User ()
        {
            user_count ++;
        }
        void set_status (std::string status)
        {
            if (status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this -> status = status;
            }
            else
            {
                this -> status == "No status";
            }
        }


};

int User::user_count = 0;

int main ()
{
    User user,user1,user2,user3;
    std::cout<<User::get_user_count()<<std::endl;

    return 0;
}

