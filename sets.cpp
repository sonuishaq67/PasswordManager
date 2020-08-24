#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

int lcm(int a, int b)
{
  return (a * b / gcd(a, b));
}
int main()
{
  int n = 10, m = 10, x, i, l, g, count = 0;
  int a[] = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91}, b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  l = a[0];
  for (i = 1; i < n; i++)
    l = lcm(l, a[i]);
  g = b[0];
  for (i = 1; i < m; i++)
    g = gcd(g, b[i]);

  for (i = l; i <= g; i++)
  {
    if (g % i == 0 && i % l == 0)
      count++;
  }

  cout << count;
  return 0;
}
