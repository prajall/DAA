#include <iostream>
using namespace std;

int count;
int Gcd(int a, int b)
{
  int r;
  while (b != 0)
  {
    count++;
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
int main()
{
  system("cls");
  int a, b, temp;
  cout << "Enter a,b: ";
  cin >> a >> b;
  if (a < b)
  {
    temp = a;
    a = b;
    b = temp;
  }
  int gcd = Gcd(a, b);

  cout << "GCD: " << gcd << endl
       << "Complexicity: " << count;
}