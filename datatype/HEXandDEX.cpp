#include<iostream>
int main()
{
    int number_Dec = 30; // Decimal thirty
    int number_Hex = 0x30; // Hex = 3*16^(1)+0*16^(0) = fourty eight
    int number_Oct = 030; // Oct = 3*8^(1)+3*8^(0) = twenty four
    std::cout<<number_Dec<<std::endl<<number_Hex<<std::endl<<number_Oct<<std::endl;
    
    // From Dex to HEX
    int number = 30;
    std::cout<<std::hex<<number<<std::endl; //= 1e, e= 14 1*16+14 = 30
    // From Dex to Oct 
    std::cout<<std::oct<<number<<std::endl; // = 36, 3*8^(1)+ 6*8^(0) = 24+6 =30

    
    return 0;
}