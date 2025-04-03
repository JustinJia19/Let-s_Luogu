#include <iostream>
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
    int L;
    cin>>L;
    int sum=0,counter = 0;
    for(int i = 0;i<L;i++)
    {
        if(IsPrime(i)){
            if (IsPrime(i))
        {
            if (sum + i > L) break;
            sum += i;
            counter++;
            cout<<i<<endl;
        }

        }

    }
    cout<<counter;
    return 0;
}
