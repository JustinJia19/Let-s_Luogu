#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int h1,h2,m1,m2;
    cin >>h1>>m1>>h2>>m2;
    int t = h2*60+m2-h1*60-m1;
    int f = t%60;
    int e = (t-f)/60;

    cout << e<<" "<<f;

    return 0;
}
