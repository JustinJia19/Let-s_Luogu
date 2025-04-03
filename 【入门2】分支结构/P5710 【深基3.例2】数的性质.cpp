#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    if(n%2==0)
        counter++;
    if(n>=4&&n<=12)
        counter++;
    int a=0,b=0,c=0,d=0;
    if(counter ==0)
        d=1;
    if(counter ==1)
    {
        b=1;
        c=1;
    }
        if(counter ==2)
    {
        a=1;

        b=1;
    }
    cout <<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}
