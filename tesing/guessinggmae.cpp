#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

void guessing_game ()
{
    int guessing_num;
    int random_num = rand() % 100;
    std::cout<<"Please guess a number within 1 - 100"<<std::endl;
    std::cin>>guessing_num;
    std::cout<<random_num<<std::endl;
    int resume;
    do
    {
        if (guessing_num > random_num)
            {
            std::cout<<"The number is too high\n";
            std::cout<<"please guess again"<<std::endl;
            std::cin>>guessing_num;

            }
        else if (guessing_num < random_num)
            {
            std::cout<<"The number is too low\n";
            std::cout<<"please guess again"<<std::endl;
            std::cin>>guessing_num;
            }
        else if (guessing_num == random_num)
            {
            std::cout<<"You got the right answer:\nswsome\n";
            break;
            }
        else if (guessing_num >100 || guessing_num<0)
            {
                std::cout<<"Out of range";
                std::cout<<"please guess again"<<std::endl;
            std::cin>>guessing_num;
            }
    }while (true);
}
int main ()
{
    srand(time(NULL));
    int manual_num;
    do{
    std::cout<<"Welcome to our guessing games"<<std::endl<<"Please Select :"<<std::endl<<"1. Game start"<<std::endl<<"2. Quit"<<std::endl;
    std::cin>>manual_num;

    switch (manual_num)
    {
        case 1:
            std::cout<<"Let's start!";
            guessing_game ();
            break;
        case 2:
            std::cout<<"Thank you for playing";
            break;
        default:
        return 0;
    }
    }while(manual_num != 2);

    return 0;
}