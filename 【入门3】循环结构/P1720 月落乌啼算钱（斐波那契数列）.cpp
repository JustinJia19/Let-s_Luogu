#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double f = (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    printf("%.2f",f);

    return 0;
}
