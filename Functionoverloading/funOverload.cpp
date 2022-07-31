#include<iostream>
#include<string>

void swap (int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;
}

void swap (std::string a,std::string b)
{
    std::string temp = a;
    a = b;
    b = temp;
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;

}
int main()
{

    int a = 10;
    int b = 20;
    std::string first_name = "Jack";
    std::string second_name = "Chau";
    swap (a,b);
    std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<std::endl;
    swap(first_name,second_name);
    return 0;
}