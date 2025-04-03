#include <iostream>
#include <cmath>
#include <string>

using namespace std;
bool IsPrime(int a)
{
    if(a<2)
    return false;
    else if(a == 2)
    return true;
    else
    {
        for(int i = 2; i<a; i++)
        {
            if(a%i==0)
            return false;
        }
    }
    return true;
}
int main()
{
    float L;
    int n = 0;
    cin>>L;
    for(int i = 1;i<100000;i++){
    float sum = 2*(1-pow(0.98,i))/(1-0.98);
    
        if(sum>=L)
        {
            n = i;
            break;
        }
    }
    cout<<n;
    return 0;
}
