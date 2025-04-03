#include <iostream>  
using namespace std;  
  
bool IsPrime(int a) {  
   if(a<2)
    return false;
    else if(a == 2)
    return true;
    else
    {
        for(int i = 2; i<a; i++)
        {
            if(a%i==0)
            return false;
        }
    }
    return true;
}  
  
int main() {  
    int n;  
    cin >> n;  
    for (int i = 4; i <= n; i += 2) { 
        for (int j = 2; j <= i / 2; j++) {  
            if (IsPrime(j) && IsPrime(i - j)) {  
                cout << i << "=" << j << "+" << (i - j) << endl;  
                break; 
            }  
        }  
    }  
  
    return 0;
}
