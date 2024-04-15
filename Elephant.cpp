#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x;
  cout << "Enter the number of steps \n";
  cin >> x;

  int num1 = x / 5;
  int num2 = x % 5;

  if (num2 == 0)
  {
    cout << num1 << endl;
  }
  else
  {
    cout << num1 + 1 << endl;
  }

  
  return 0;
}



    


