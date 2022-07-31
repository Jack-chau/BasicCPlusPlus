#include<iostream>
#include<string>

int main ()
{
/*
    std::string greeting = "hello";
    std::cout<< greeting + " there"<<std::endl; // + is concatenate
    // or
    std::string complete_greeting = greeting + " there";
    std::cout<<complete_greeting<<std::endl;
    complete_greeting += "!";
    std::cout<<complete_greeting<<std::endl;
    std::cout<<complete_greeting.length()<<std::endl;

    std::string greeting;
    getline(std::cin,greeting);
    std::cout<<greeting.length()<<std::endl;
*/
    /*
    std::string greeting = "Hello";
    
    std::cout<<greeting.length()<<std::endl;
    std::cout<<greeting.size()<<std::endl;
    greeting += " there"; //modify string variable
    std::cout<<greeting<<std::endl;
    greeting.append(" there!");
    std::cout<<greeting<<std::endl;
    
    mathod == number function == functions attached to objects (0 base)
    
    greeting.insert(3," ");
    std::cout<<greeting<<std::endl;
    greeting.erase(3,1);  //erase = 擦除 (remove previous gretting.insert)
    std::cout<<greeting<<std::endl;
    greeting.erase(3); // remove all after the 3 characters 
    std::cout<<greeting<<std::endl;
    greeting.erase(greeting.length() -1); 
    std::cout<<greeting<<std::endl; //remove back string
    greeting.pop_back();
    
    greeting.replace(0,4,"Heaven"); // first argument 0 is the starting index, the second index 4 is the length.
    std::string WTF ="What the fuck";
    WTF.replace(9,4,"hell");
    std::cout<<WTF<<std::endl;
    */
    // Fing string:
    std::string WTF = "What the fuck?";
    WTF.replace(WTF.find("fuck"),4,"hell"); // find string
    std::cout<<WTF<<std::endl;

    std::string WhatUp = "What is up ?";
    std::cout<<WhatUp.substr(5,2)<<std::endl;  // substr = sub string, char inside a string (grap the string "is")
    std::cout<<WhatUp.find_first_of("aeiou")<<std::endl;
    std::cout<<WhatUp.find_first_of("!")<<std::endl; // the output is 18446744073709551615 which is npos, npos is -1
    if (WhatUp.find_first_of("!") == -1)
    {
        std::cout<<"Not found"<<std::endl;
    }
    if (WhatUp == "What is up ?")
    {
        std::cout<<"equal"<<std::endl;
    }

    if (WhatUp.compare("What is up ?") ==0)
    {
        std::cout<<"Equals"<<std::endl;
    }
  
    unsigned long npos = -1; 

    if(npos == -1)
    {
        std::cout<<"npos not found"<<std::endl;
    }
    return 0;
}