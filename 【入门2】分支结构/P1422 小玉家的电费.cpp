#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double sum;
    cin >> n;
    if(n<=150)
        sum = n*0.4463;
    else if(n>150&&n<=400)
        sum = (n-150)* 0.4663 + 150*0.4463;
    else
        sum = (n-400)*0.5663+250* 0.4663 + 150*0.4463;

    printf("%.1f",sum);

}
