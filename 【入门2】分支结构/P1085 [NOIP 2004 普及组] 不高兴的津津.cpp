#include <iostream>
using namespace std;

int main()
{
    int flag = 0;
    int max = 0;
    int day = 0;
    for(int i=0;i<7;i++)
    {
            int a[2]={0};
            cin>>a[0]>>a[1];
            if(a[0]+a[1]>8){
                flag = 1;
                if(a[0]+a[1]>max)
                {
                    max =a[0]+a[1];
                    day = i;
                }
            }
    }
    if(flag == 0)
        cout<<flag;
    else
        cout<<day+1;
    return 0;
}
