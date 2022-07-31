#include<iostream>
#include<climits>
int main ()
{
    short a;
    int b;
    long c;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    std::cout<<"The size of 'short integer' datatype is: "<<sizeof(short)<<" and the range is "<<SHRT_MIN<<" to "<<SHRT_MAX<<std::endl;
    std::cout<<"The size of 'integer' datatype is: "<<sizeof(int)<<" and the range is "<<INT_MIN<<" to "<<INT_MAX<<std::endl;
    std::cout<<"The size of 'long integer' datatype is: "<<sizeof(long)<<" and the range is "<<LONG_MIN<<" to "<<LONG_MAX<<std::endl;
    std::cout<<"The size of 'long long integer' datatype is: "<<sizeof(long long)<<" and the range is "<<LLONG_MIN<<" to "<<LLONG_MAX<<std::endl;
    std::cout<<"The size of 'Unsigned short integer' datatype is: "<<sizeof(unsigned short)<<" and the range is 0 to "<<USHRT_MAX<<std::endl;
    std::cout<<"The size of 'Unsigned integer' datatype is: "<<sizeof(unsigned int)<<" and the range is 0 to "<<UINT_MAX<<std::endl;
    std::cout<<"The size of 'Unsigned long integer' is "<<sizeof(unsigned long)<<" and the range is 0 to "<<ULONG_MAX<<std::endl;
    std::cout<<"The size of 'Unsigned long long is "<<sizeof(unsigned long long)<<" and the range is 0 to "<<ULONG_LONG_MAX<<std::endl;
    return 0;
}