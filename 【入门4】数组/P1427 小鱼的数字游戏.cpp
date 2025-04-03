#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=0;

    int a[101]={0};

    for(int i = 0;i<101;i++)
    {
        n++;
        cin>>a[i];
        if(a[i]==0)
            break;
    }
    for(int i = n-2;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
