#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> S;
    S.insert(1);
    S.insert(-1);
    S.insert(1132);
    S.insert(123);
    S.insert(3141);
    S.insert(114);
    for (int x : S)
        cout << x << " ";

    auto it = S.find(3141);
    if (it == S.end())
        cout << "Element not found!!";
    else
    {
        cout << "Presemt!!\n";
        cout << *it << endl;
    }
}