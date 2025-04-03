#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m,n,x;
    int a,b,c;
    cin>>m>>n>>x;
    a=min(min(m,n),x);
    c=max(max(m,n),x);
    b=m+n+x-a-c;
    string order;
    cin>>order;
    if(order == "ABC")
        cout<<a<<" "<<b<<" "<<c;
    else if(order=="ACB")
        cout<<a<<" "<<c<<" "<<b;
    else if(order=="BAC")
        cout<<b<<" "<<a<<" "<<c;
    else if(order=="BCA")
        cout<<b<<" "<<c<<" "<<a;
    else if(order=="CAB")
        cout<<c<<" "<<a<<" "<<b;
    else if(order=="CBA")
        cout<<c<<" "<<b<<" "<<a;
    return 0;
}
