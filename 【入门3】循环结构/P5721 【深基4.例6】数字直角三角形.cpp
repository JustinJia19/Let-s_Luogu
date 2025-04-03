#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int row = n;
    int counter = 1;
    for (int i = 0; i < row; i++)
    {
        for(int j = 1; j < n+1; j++)
        {
            if (counter < 10)
                cout << "0" << counter;
            else
                cout << counter;
            counter++;
        }
        cout << endl;
        //row--;
        n--;

    }

    return 0;
}
