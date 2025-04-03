#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int min = 1000005;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]<min)
            min = a[i];
    }
    cout << min;

    return 0;
}
