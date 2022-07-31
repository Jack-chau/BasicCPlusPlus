#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

void Guessing_Game ()
{
    int guess_num;
    int random = rand() % 25;
    std::cout<<"Guess an answer between 0 - 25\n";
    std::cin>>guess_num;
    std::cout<<"the answer is : "<<random<<"\n";
    do 
    {
        if (guess_num > random)
            {
                std::cout<<"The number is too high\n";
                std::cout<<"Please guess again\n";
                std::cin>>guess_num;
            }
        else if (guess_num< random)
            {
                std::cout<<"The number is too low\n";
                std::cout<<"Please guess again\n";
                std::cin>>guess_num;
            }
        else if (guess_num == random)
            {
                std::cout<<"You got the right answer!\nawsome!!\n";
                break;
            }
    }while(true);
}

int main ()
{
    srand(time(NULL));
    std::cout<<"Welcoe to our guessing games!\n";
    int choice;
    do
    {
        std::cout<<"main manual:\n1. Start\n2. Quit\n";
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            std::cout<<"Let's Start!!!";
            Guessing_Game ();
            break;
        case 2:
            std::cout<<"Thank you for nothing";
            break;
        default:
            std::cout<<"Please input number!";
            break;
        }
    }while(choice != 2);

    return 0;
}
