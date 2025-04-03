#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m,n,x;
    cin>>m>>n>>x;
    int a = min(min(m,n),x);
    int c = max(max(m,n),x);
    for(int i = a;i>0;i--)
    {
        if(a%i==0 && c%i==0)
        {
            a=a/i;
            c=c/i;
        }
    }
    cout<<a<<"/"<<c;

    return 0;
}
