/*

    *
    **
    ***
    ****
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

  for (int row = 1; row <= (2*n - 1); row++)
  {
    if (row <= n)
    {

    for (int col = 1; col <= row; col++)
    {

      std::cout << "*";

    }

    std::cout << std::endl;

    }

    else
    {

    for (int col = 1; col <= ((2 * n) - row); col++)
    {

      std::cout << "*";

    }
    
    std::cout << std::endl;

    }

  }

}