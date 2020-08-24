#include<iostream>
#include<vector>
int main()
{
std::vector< int > v(20);
std::vector< char > names(20, 'Unknown');
for(int i = 0; i < 20; i++)
v[i] = i+1;
v.resize(25);
for(int i = 20; i < 25; i++)
v[i] = i*2;
for(int i = 0; i < 25; i++)
std::cout<<v[i]<<" \n";
}