#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n, k;
    cin >> n>>k;
    vector<int>v1;
    vector<int>v2;
    for(int i = 1 ;i<n+1;i++)
    {
        if(i%k==0)
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    int sum1 = accumulate(v1.begin(), v1.end(), 0);
    int sum2 = accumulate(v2.begin(),v2.end(),0);
    float ave1,ave2;
    if(v1.empty())
        ave1 = 0;
    else
        ave1 = (float)sum1/v1.size();
    if(v2.empty())
        ave2 = 0;
    else
        ave2 = (float)sum2/v2.size();
    printf("%.1f %.1f",ave1,ave2);
    return 0;
}
