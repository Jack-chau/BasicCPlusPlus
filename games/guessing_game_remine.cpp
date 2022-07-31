#include<iostream>
#include<vector>
#include<string>
#include<limits>
#include<ctime>
#include<cmath>
#include<cstdlib>
void count_guessess (int arr[],int size)
{
    std::cout<<"Here is the number you guessed:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}

void guessing_game ()
{
    int random = rand() % 11; 
    std::cout<<"Please guess a number within 1 - 10: ";
    int guesses [250];
    int guess_count =0;
    int guess_num;
    
    while(true)
    {
        std::cout<<"The answer is :"<<random<<std::endl;
        std::cin>>guess_num;
        guesses[guess_count++] = guess_num;
            if (guess_num == random)
            {
                std::cout<<"You got the right answer! \n";
            break;
            }else if (guess_num > random)
            {
                std::cout<<"the  number is too high\n";
            }else if (guess_num < random)
            {
                std::cout<<"The number is too low\n";
            }
    }
    count_guessess (guesses,guess_count);
}

int main ()
{
    srand(time(NULL));
    std::cout<<"Welcome to the guessing games!"<<std::endl;
    int choice;
    do
    { 
        std::cout<<"Please choice :\n1.Start\n2.End game\n";
        std::cin>>choice;
        switch (choice)
        {
            case 1:
                std::cout<<"Let's Starts";
                guessing_game ();
            break;
            case 2:
                std::cout<<"Quit";
            return 0;
        }
    }while(choice != 0);

    return 0;
}