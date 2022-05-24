/*

    *****
    *****
    *****
    *****
    *****

*/
 
#include<iostream>

int main()
{

  int n;

  std::cout << "Enter number of rows: ";

  std:: cin >> n;

  std::cout << std::endl;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col <= n; col++)
    {

      std::cout << "*";

    }
    
    std::cout << std::endl;

  }
  

}