#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>
#include <functional>
#include <numeric>

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
    lst.pop_front();
    lst.pop_back();
    int sum = accumulate(lst.begin(), lst.end(), 0);
    double ave = sum*1.0/(n-2);
    printf("%.2f",ave);

    return 0;
}
