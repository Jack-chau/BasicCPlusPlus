#include<iostream>
int main ()
{
    int age;
    std::cout<<"How old are you ? \n"; //printf("How old are you ?\n");
    std::cin>>age;                    //scanf("%d",&age);

    if (age < 17)
    {
        std::cout<<"You are not old enougn \n";
    }else if (age == 17)
    {
        std::cout<<"Bingo";
    }else
    {
        std::cout<<"Fuck off";
    }
 
    return 0;
}