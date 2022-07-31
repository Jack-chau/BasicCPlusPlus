#include<iostream>
double index_function (double number, int index)
{
    double result =1;
        for (int i = 0; i < index; i ++)
        {
           result = result * number;
           std::cout<<std::endl;
           std::cout<<"i = "<<i; 
        }
return result;
}

void Print_function(double number, int index)
{
    double result;
    result = index_function(number,index);
    std::cout<<std::endl;
    std::cout<<"The result is "<<result<<std::endl;
}

int main ()
{
    double number;
    int index;
    std::cout<<"Please enter the number: "<<std::endl;
    std::cin>>number;
    std::cout<<"Please enter the index: "<<std::endl;
    std::cin>>index;
    Print_function(number,index);    
    return 0;
}