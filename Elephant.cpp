#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x;
  int n;
  cout << "Enter the step size \n";
  cin >> n;
  cout << "Enter the distance between the first and second elephant \n";
  cin >> x;

  int num1 = x / n;
  int num2 = x % n;

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
