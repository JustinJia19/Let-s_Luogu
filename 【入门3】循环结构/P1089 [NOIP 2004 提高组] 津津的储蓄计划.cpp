#include <iostream>
using namespace std;

int main()
{   
    int res = 0;
    int a[12];
    int sum = 0;
    for(int i = 0;i<12;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i<12; i++)
    {
        res = res+300-a[i];
        if(res>=100)
        {
            sum = sum+res-res%100;
            res = res%100;
        }
        else if(res < 0)
        {
            cout <<-(i+1);
            return 0;
        }
        else
        continue;
    }
    cout << res+sum*1.2;
    return 0;
}
