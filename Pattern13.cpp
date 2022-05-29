/*

         *
        * *
       *   *
      *     *
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

    if(row == n)
    {

      for (int col = 1; col <= ((2 * n) - 1); col++)
      {

        std::cout << "*";

      }

    }

    else
    {

      for (int col = 1; col <= (2 * row - 1); col++)
      {

        if((col == 1) || (col == ((2 * row) - 1)))
        {

          std::cout << "*";

        }

        else
        {

          std::cout << " ";

        }

      }

    }

    std::cout << std::endl;

  }

}