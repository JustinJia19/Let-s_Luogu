#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int h;
    int r;
    cin >>h>>r;
    double v=3.14*0.001*r*r*h;
    double n=ceil(20.0/v);
    int m= (int)n;
    cout << n;

    return 0;
}
