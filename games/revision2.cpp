#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<windows.h>

void print_arr(int arr[],int guess_count)
{
    std::cout<<"The number you have been chioosem:\n";
    for (int i =0; i < guess_count; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void play_game()
{
    //Select a number from 0 - 9;
    int guesses [250];
    int guess_count =0;
    int random = rand() % 10;
    std::cout<<random<<std::endl;
    int guess;
    while(true)
    {
    std::cout<<"Please guess a number\nfrom 0-9\n";
    std::cin>>guess;
    guesses[guess_count++] = guess;

        if (guess == random)
        {
            Sleep(1000);
            std::cout<<"You got the right answer\n";
            break;   
        }else if (guess > random)
        {
            Sleep(1000);
            std::cout<<"The number is too high\n";
        }else if(guess <random)
        {
            Sleep(1000);
            std::cout<<"The number is too low\n";
        }
    }
    print_arr(guesses,guess_count);
}
int main ()
{
    
    srand(time(NULL));
    int choice;
    std::cout<<"Welcome to the guessing game\n";
    std::cout<<"Please choose:\n1: Play\n2: Quit\n";
    std::cin>>choice;
    do
    {
        switch (choice)
        {
            case 1:
                std::cout<<"Welcome to the guessing game\n";
                play_game();
            case 2:
                std::cout<<"Quit\n";
                return 0;
        }
    }while(choice != 0);

    return 0;
}