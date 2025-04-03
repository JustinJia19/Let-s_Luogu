#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int a1,b1,a2,b2,a3,b3;
    cin>>n>>a1>>b1>>a2>>b2>>a3>>b3;
    int sum1 = ceil(n*1.0/a1)*b1;
    int sum2 = ceil(n*1.0/a2)*b2;
    int sum3 = ceil(n*1.0/a3)*b3;
    int x = min(min(sum1, sum2), sum3);
    cout<<x;
    return 0;
}
