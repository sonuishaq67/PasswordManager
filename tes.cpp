#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int near(int);
int main()
{
    int x=8,h;
    h=near(x);
    std::cout<<h;
    return 0;
}
int near(int x)
{
    int i,j;
    for(i=1;i<x;i++)
    {
        if((pow(i,2)+i-2*x)>0)
           break;
    }
    return i;
}
