/*

        *
       ***
      *****
     *******
    *********

*/

#include <iostream>

int main()
{

  int n;

  std::cout << "Enter number of rows: ";

  std::cin >> n;

  std::cout << std::endl;

  for (int row = 1; row <= n; row++)
  {

    for (int space = (n - row); space > 0; space--)
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