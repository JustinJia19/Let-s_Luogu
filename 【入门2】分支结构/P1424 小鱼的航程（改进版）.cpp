#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,n,mile;
    cin>>x>>n;
    int spare = x+n%7;
    if(x==7)
    {
        if(n%7==0)
            mile = 250*n-((n-n%7)/7)*2*250;
        else
        mile = 250*n-((n-n%7)/7)*2*250-250;
    }
    else{
    if(spare<7)
        mile = 250*n-((n-n%7)/7)*2*250;
    else if(spare==7)
        mile = 250*n-((n-n%7)/7)*2*250-250;
    else
        mile = 250*n-((n-n%7)/7)*2*250-500;
    }
    cout<<mile;

    return 0;
}
