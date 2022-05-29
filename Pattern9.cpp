/*

    *********
     *******
      *****
       ***
        *

*/

#include <iostream>

int main()
{

  int n;

  std::cout << "Enter number of rows: ";

  std::cin >> n;

  std::cout << std::endl;

  for (int row = n; row > 0; row--)
  {

    for (int space = 0; space < (n - row); space++)
    {

      std::cout << " ";

    }

    for (int col = 1; col <= ((2 * row) - 1) ; col++)
    {

      std::cout << "*";

    }

    std::cout << std::endl;

  }

}