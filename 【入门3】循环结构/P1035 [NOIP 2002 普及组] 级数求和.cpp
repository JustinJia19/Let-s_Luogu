#include <iostream>
using namespace std;

int main()
{   
    int n;
    cin>> n;
    double sum = 0;
    int i = 0;
    for(i = 1;sum<=n;i++)
    {
        sum = sum+1.00000/i;

    }
    cout << i-1;
    return 0;
}
