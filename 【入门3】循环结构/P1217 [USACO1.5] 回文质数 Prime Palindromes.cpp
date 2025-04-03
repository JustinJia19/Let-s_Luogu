#include <iostream>
#include <cmath>
#include <string>

using namespace std;
bool IsPrime(int a) {
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    for (int i = 3; i <= sqrt(a); i += 2) {
        if (a % i == 0) return false;
    }
    return true;
}
bool IsPard(int a)
{
    int c = a;
    int b=0;

    while(a>0)
    {
        b=b*10+a%10;
        a=(a-a%10)/10;
    }
    if(c==b)
        return true;
    else
        return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i = a;i<b+1;i++){
        if(IsPard(i)&&IsPrime(i))
            cout<<i<<endl;
        if(i==10000000)
            break;
    }

    return 0;
}
