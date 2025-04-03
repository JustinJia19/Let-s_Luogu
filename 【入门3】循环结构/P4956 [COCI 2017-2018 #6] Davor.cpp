#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    n=n/364;
    int x = 0;
    int label = n;
    if(label>100)
        label = 100;
    for(x=label;x>0;x--)
    {
        if((n-x)%3!=0||(n-x)/3==0)
            continue;
        else
        {
            int k=(n-x)/3;
            cout<<x<<endl<<k<<endl;
            break;
        }

    }


    return 0;
}
