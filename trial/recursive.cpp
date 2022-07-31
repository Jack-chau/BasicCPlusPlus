#include<iostream>

void recursive(int i)
{
    while (i< 10)
    {
            std::cout<<"the variable is: "<<i<<std::endl;
            i++;
        if (i!=10)
        {
            recursive(i +1);
        }else
        {
        break;
        }   
    }



}


int main ()
{

    recursive(1);
    return 0;
}