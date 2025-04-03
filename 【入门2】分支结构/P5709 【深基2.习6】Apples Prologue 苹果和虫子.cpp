#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int m;
    double t, s;
    cin>> m>> t>>s;
    m = m-ceil(s/t);
    if(m<0)
    cout << "0";
    else
    cout << m;

    return 0;
}
