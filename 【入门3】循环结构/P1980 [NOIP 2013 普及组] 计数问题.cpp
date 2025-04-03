#include <iostream>
#include <string>

using namespace std;
int getNum(string& str, string& str2)
{
    int counter = 0;
    size_t pos = 0;

    while ((pos = str.find(str2, pos)) != std::string::npos) {
        ++counter;
        pos += str2.length();
    }

    return counter;
}
int main()
{
    int n, x;
    cin >> n>>x;
    int counter = 0;
    string str2 = to_string(x);
    for(int i=1;i<n+1;i++)
    {
        string strNum = to_string(i);
        counter = counter +getNum(strNum, str2);

    }
    cout<< counter;
    return 0;
}
