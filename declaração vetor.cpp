#include <iostream>
using namespace std;

int main()          // Todo prohgrama inicia na função main
  {
  int number[5];

  number[1] = 12;
  number[2] = 24;
  number[4] = 100;

  cout << "nuber[0]" << number[0] << "\n";
  cout << "nuber[1]" << number[1] << "\n";
  cout << "nuber[2]" << number[2] << "\n";
  cout << "nuber[3]" << number[3] << "\n";
  cout << "nuber[4]" << number[4] << "\n";
  cout << "nuber[5]" << number[5] << "\n"; // error: only 0-4 are valid

  return 0;
  }
