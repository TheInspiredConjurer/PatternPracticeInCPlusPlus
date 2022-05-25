/*

    *****
    ****
    ***
    **
    *

*/

#include<iostream>

int main()
{

  int n;

  std::cout << "Enter number of rows: ";

  std:: cin >> n;

  std::cout << std::endl;

  for (int row = n; row > 0; row--)
  {
    for (int col = 1; col <= row; col++)
    {

      std::cout << "*";

    }
    
    std::cout << std::endl;

  }
  

}