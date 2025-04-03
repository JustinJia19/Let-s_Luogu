#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 1;
    while(a>1)
    {
        count++;
        a = floor(a*1.0/2);
    }
    cout << count;
    return 0;
}
