#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool f(int x,int y)
{
    return x>y;
}
int main()
{
    vector<int> A = {11, 2, 3, 46, 5, 4624};
    cout << A[1] << "\n";
    bool present = binary_search(A.begin(), A.end(), 3);
    cout << present << "\n";
    A.push_back(100);
    A.push_back(200);
    A.push_back(300);
    A.push_back(100);
    A.push_back(123); 
    sort(A.begin(), A.end());
    vector<int>::iterator it=lower_bound(A.begin(),A.end(),100);
    vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100);
    cout<<*it<<endl;
    cout<<*it2<<endl;
    cout<<it2-it<<endl; 
    sort(A.begin(),A.end(),f);
    vector<int>::iterator i3;
    for (i3=A.begin();i3!=A.end();i3++)
    cout<<*i3<<" ";
    return 0;
}