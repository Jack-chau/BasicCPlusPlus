#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<array>
void print_arr(int arr[],int guess_count)
{
    std::cout<<"The Number you have been chooense:\n";
    for(int i =0; i< guess_count;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void play_game()
{
    std::cout<<"Please guess a number between the range 0-10\n";
    int random = rand() % 10;
    std::cout<<random<<std::endl;
    int guess;
    int guesses = 0;
    int arr_gus  [250];
    do
    {
        std::cin>>guess;
        arr_gus [guesses++] = guess;
        if (guess == random)
        {
            std::cout<<"You win\n";
            break;
        }else if(guess >random)
        {
            std::cout<<"The number is too high\n";
        }else if(guess < random)
        {
            std::cout<<"The number is too low\n";
        }else
        {
            std::cout<<"Wrong Number\n";
            break;
        }
    }while(guess != 0);
    print_arr(arr_gus,guesses);
}
int main ()
{
    srand(time(NULL)); //to gen random number
    // let's make a manuel fist:

    int choice;
    do
    {
        std::cout<<"please choose:\n1: Play\n2: Quit\nYour choice is:";
        std::cin>>choice;
        switch (choice)
        {
            case 1:
                std::cout<<"Let's Play\n";
                play_game();
                break;
            case 2:
                std::cout<<"Quit";
                return 0;
        }
    }while(choice !=0);
    return 0;
}