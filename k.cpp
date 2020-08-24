#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
int near(long long int);
using namespace std;
int main() 
{
    int h,g,x,i,j,a;
cin>>x;
    long long int v[21];
    for(int z=0;z<x;z++)
cin>>v[z];
    for(int y=0;y<x;y++)
    {
    i=1;j=1;
        h=near(v[y]);

        if(h%2==0)
        {
        i=h;
        for(g=0;-1+g<(v[y]-h*(h-1)/2);g++)
        {
            --i;
            ++j;
        }
        }
        else
        {
        j=h;
        for(g=0;g<(-1+v[y]-h*(h-1)/2);g++)
        {++i;--j;}
        }
cout<<"("<<i<<","<<j<<")\n";
    }
    return 0;

}
int near(long long int x)
{
   long long int i;
    for(i=1;i<x;i++)
    {
        if((i*i+i-2*x)>0)
           break;
    }
    return i-1;
}
