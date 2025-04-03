#include <iostream>
using namespace std;

int main()
{   
    char n;
    cin >> n;
    int x = (int)n;
    int y = x-32;
    n = (char)y;
    cout << n;
    return 0;
}
