#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(m<10)
                cout<<"0"<<m;
            else
                cout<<m;
            m++;
        }
        cout<<endl;
    }
    cout<<endl;
    m = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(n-i-j>=2)
            {
                cout<<"  ";
            }
            else
            {
                if(m<10)
                    cout<<"0"<<m;
                else
                    cout<<m;
                m++;
            }

        }
        cout<<endl;

    }

    return 0;
}
