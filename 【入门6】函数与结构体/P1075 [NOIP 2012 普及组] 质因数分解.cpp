#include <iostream>
#include <cmath>

using namespace std;
bool IsPrime(int a) {
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    for (int i = 3; i <= sqrt(a); i += 2) {
        if (a % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        if(n%i==0&&IsPrime(i)){
            printf("%d",n/i);
            break;
            }
    }

    return 0;
}
