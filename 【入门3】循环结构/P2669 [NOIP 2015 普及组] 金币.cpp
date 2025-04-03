#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int renew = 0;
    int money =1;
    for(int i=1;i<n+1;i++)
    {
        sum = sum+money;
        if(i-renew == money)
        {
            renew = i;
            money++;
        }
    }
    cout<<sum;
    return 0;
}
