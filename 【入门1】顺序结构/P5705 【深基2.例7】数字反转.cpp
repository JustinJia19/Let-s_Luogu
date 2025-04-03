#include <iostream>

using namespace std;

int main()
{
    float n;
    cin >> n;
    int x = n*10;
    int sum = 0;
    int y = 0;
    while(x!=x%10)
    {
        sum=sum*10;
        y = x%10;
        x=(x-x%10)/10;
        sum =sum+y;
    }
    sum = sum*10+x;
    float sum2= sum*0.001;
    cout << sum2;
    return 0;
}
