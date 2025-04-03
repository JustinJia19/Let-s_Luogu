#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    for(int i = 0;i<n+1;i++)
        sum = sum+i;
    cout<<sum;
}
