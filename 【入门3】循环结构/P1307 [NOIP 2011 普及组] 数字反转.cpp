#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int IsPard(int a)
{
    int c = a;
    int b=0;

    while(a>0)
    {
        b=b*10+a%10;
        a=(a-a%10)/10;
    }
    return b;
}
int main()
{
    int a;
    cin>>a;
    int label = 1;
    if(a<0){
        label = -1;
        a=-a;
    }
    a=IsPard(a)*label;
    cout<<a;

    return 0;
}
