#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    int a[1001]={0};
    a[0]=n;
    for(int i = 1;i<1001;i++)
    {
        if(n==1)  break;

        if(n%2==1)
            a[i]=3*n+1;
        else
            a[i]=n/2;
        n=a[i];
    }
    int flag = 0;
    for(int i = 1001;i>=0;i--)
    {
        if(a[i]!=0)  flag=1;
        if(flag)
            cout<<a[i]<<" ";
    }

    return 0;
}
