#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
int near(long long int);
using namespace std;
int main()
{

   static int i,pos = 0, k, n[20], r = 1, c = 1, down = 1, count;

    cin >> count;

    for (i = 0; i < count; count++)
        cin >> n[i];
    for (i = 0; i < count; i++)
    {
        r = 1, c = 1, down = 1;
        while (pos <= n[i])
        {
            if (r == 1 && c == 1)
            {
                pos++;
            }
            if (down)
            {
                r++;
                k = r;
                for (int j = 1; j <= k; j++)
                {
                    pos++;
                    if (pos == n[i])
                        continue;
                    cout << "(" << r << "," << c << ")\n";
                    if (j < k)
                    {
                        r--;
                        c++;
                    }
                }
            }
            else
            {
                c++;
                k = c;
                for (int j = 1; j <= k; j++)
                {
                    pos++;
                    if (pos == n[i])
                        continue;
                    cout << "(" << r << "," << c << ")3\n";
                    if (j < k)
                    {
                        r++;
                        c--;
                    }
                }
            }
            down = !down;
        }
    }
}