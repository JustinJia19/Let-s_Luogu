#include <iostream>
using namespace std;
bool year(int n)
{
    if(n%100==0){
        n=n/100;
    }
    if(n%4==0)
        return true;
    else
        return false;

}
int main()
{
    int n;
    cin>> n;
    cout<< year(n);
    return 0;
}
