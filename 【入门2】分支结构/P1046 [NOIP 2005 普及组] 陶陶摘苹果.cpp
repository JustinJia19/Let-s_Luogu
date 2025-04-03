#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[10];
    for(int i = 0;i<10;i++)
    {
        cin >>a[i];
    }
    int n;
    cin >> n;
    n = n+30;
    int count = 0;
    for(int i = 0;i<10;i++)
    {
        if(n>=a[i])
            count++;
    }
    cout<<count;
    return 0;
}
