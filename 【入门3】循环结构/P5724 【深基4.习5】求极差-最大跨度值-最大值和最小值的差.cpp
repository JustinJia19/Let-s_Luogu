#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int n;
    cin>>n;
    list <int>lst;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        lst.push_back(x);
    }
    lst.sort(greater<int>());
    int m = lst.front()-lst.back();
    cout<<m;

    return 0;
}
