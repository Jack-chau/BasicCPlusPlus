#include<iostream>

int factorial (int number)
{
  for (int i = number -1; i > 0; i--)
  {
    number *=i;
  }
 return number;
}
int main ()
{
/*

  int factorial = 5;
  for (int i = factorial -1;i > 0; i--)
    {
      factorial = factorial * i;
    }
  std::cout<<factorial<<std::endl;
*/

std::cout<<factorial (5)<<std::endl;

  return 0;
}