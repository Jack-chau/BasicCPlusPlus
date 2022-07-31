#include<iostream>
#include<string>
int main ()
{
    std::string name_answer = "Jack";
    int age_answer = 23;
    int age;
    std::string name;
    std::cout<<"guess my name:\n";
    std::cin>>name;
    std::cout<<"guess my age: \n";
    std::cin>>age;

    if (name == name_answer && age==age_answer)
    {
        std::cout<<"You got it right ! \n";
    }else if (name == name_answer && age != age_answer)
    {
        std::cout<<"yes I am Jack, but not that age! ";
    }else if (name != name_answer && age == age_answer)
    {
        std::cout<<"No it is not my name, but you got my age";
    }else 
    {
        std::cout<<"wrong answer";
    }
/*
    if (name == name_answer)
    {
        if (age == age_answer)
        {
            std::cout<<"You got it !\n";
        }else
        {
            std::cout<<"Wrong age !!\n";
        }

    }else 
    {
        std::cout<<"Do I know you ?\n";
    }
*/
    return 0;
}

/*
    logical opperator
    and = &&
    or = ||
    not !
    equal to : ==
    not equal to !=
    > greater than
    < less than
*/
