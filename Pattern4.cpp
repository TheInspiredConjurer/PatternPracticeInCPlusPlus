/*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/

#include<iostream>

int main()
{

  int n;

  std::cout << "Enter number of rows: ";

  std:: cin >> n;

  std::cout << std::endl;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {

      std::cout << col << " ";

    }
    
    std::cout << std::endl;

  }
  

}