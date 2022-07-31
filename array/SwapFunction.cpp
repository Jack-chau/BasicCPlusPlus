#include<iostream>


/*  copy a,p in void function (pass by value)
void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;
}

int main()
{

    int a = 10;
    int b = 20;

    swap (a,b);
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;
*/

//(pass by reference) change the value of both a and b inside and outside of the function
// Referenc keeps the data type
// pointer doesn't keep the data type
void swap (int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;
}

int main()
{

    int a = 10;
    int b = 20;

    swap (a,b);
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;
    return 0;
}