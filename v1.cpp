#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    for (int i = 1; i < 1000000; i *= 2)
    {
        v.push_back(i);
    }
    std::vector<long>::iterator x = v.begin();
    int elements_count = v.size();
    std::cout << "\n"
              << elements_count;
}