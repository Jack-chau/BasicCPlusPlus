#include<iostream>
#include<vector>
class multipy
{
public:
    double A;
    double B;
};
double multipy_fun(double A, double B)
{
    double answer = A * B;
    return answer;
}
int main()
{
    multipy mul;
    mul.A = 5.5;
    mul.B = 5.5;
    std::cout<<multipy_fun(mul.A, mul.B)<<std::endl;
    return 0;
} 