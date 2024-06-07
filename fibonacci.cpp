#include <iostream>
using namespace std;
int count = 0;

int fib(int n)
{
  int i, f0 = 1, f1 = 1, f;
  if (n == 1)
  {
    count++;
    return 1;
  }
  else if (n == 2)
  {
    count += 2;
    return 1;
  }
  else
  {
    for (i = 3; i <= n; i++)
    {
      count++;
      f = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    return f;
  }
}

main()
{
  system("cls");

  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Fibonacci: " << fib(n) << endl;
  cout << "Complexicity: " << count;
  //end of program
}
