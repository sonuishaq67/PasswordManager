#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> A;
    A[1] = 100;
    A[2] = 200;
    A[3] = 300;
    A[4] = 400;
    A[5] = 500;
    A[6] = 600;

    map<char, int> S;
    string x = "shaik ishaq ahmed";
    for (char c : x)
        S[c]++;

    cout << S['a'] << " " << S['i'];
}