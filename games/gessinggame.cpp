#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>

void print_arr (int arr[],int guess_count)
{
    std::cout<<"The number you have been chioosen: \n";
    for (int i = 0; i < guess_count; i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}
void play_game()
{
    int guesses [250];
    int guess_count = 0;
    std::cout<<"Let's get started\n";
    int random = rand() % 10;
    std::cout<<random<<std::endl;
    int guess;

    while(true)
    {
    std::cout<<"Please guess the number! \n";
    std::cin>>guess;
    guesses[guess_count++] = guess; // put guess in to guesses and increase the guess_count
        if (guess == random)
        {
            Sleep(1000);
            std::cout<<"You win!\n";
            Sleep(1000);
            break;
        }else if (guess < random)
        {
            Sleep(1000);
            std::cout<<"The number is too low! \n";
        }
        else if (guess > random)
        {
            Sleep(1000);
            std::cout<<"The number is too high \n";
        }
  }
        print_arr(guesses,guess_count);
}

int main ()
{
    int choice;
    srand(time(NULL));
    do
    {
        std::cout<<"What you choice ?\n1. Quit\n2. Let's play\n";
        std::cin>>choice;
        switch(choice)
        {
            case 1:
                std::cout<<"Quit\n";
                return 0;
            case 2:
                std::cout<<"Let's play\n";
                    play_game();
        }
    }while(choice != 0);
    return 0;
}