#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<limits>
#include<ctime>
#include<cmath>
#include<cstdlib>

void save (int count)
{
    std::ifstream input ("best_score.txt");
    int best_score;
    input >> best_score;
    if (!input.is_open())
    {
        std::cout<<"Unable to open the file\n";
        return ;
    }

    std::ofstream output ("best_score.txt");
    if (!output.is_open())
    {
        std::cout<<"Unable to open the file\n";
        return ;
    }
    if(count < best_score)
    {
        output<<count;
    }else
    {
        output << best_score;
    }


}


void print_vector (std::vector<int> vector)
{
    std::cout<<"Here is the number you guessed:\n";
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout<<vector[i]<<" ";
    }
}

void guessing_game ()
{
    int random = rand() % 251; 
    std::cout<<"Please guess a number within 1 - 250: ";
    std::vector<int> guesses;
    int count = 0;
    int guess_num;
    while(true)
    {
        std::cout<<"The answer is :"<<random<<std::endl;
        std::cin>>guess_num;
        count ++;
        guesses.push_back(guess_num);
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

    print_vector(guesses);
    save (count);
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