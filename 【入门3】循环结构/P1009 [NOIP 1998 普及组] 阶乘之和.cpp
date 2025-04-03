#include <iostream>
using namespace std;
//考虑到高精度问题，输出一定为字符串
int a[1000] = { 0 };
int b[1000] = { 0 };
void mul(int* a, int c)
{
	int cin = 0;
	for (int i = 1; i < 1000; i++)
	{
		a[i] = a[i] * c + cin;
		cin = a[i] / 10;
		a[i] = a[i] % 10;
	}
}
void add(int* a, int* b)
{
	int cin = 0;
	for (int i = 1; i < 1000; i++)
	{
		b[i] = a[i] +b[i] + cin;
		cin = b[i] / 10;
		b[i] = b[i] % 10;
	}
}
int main()
{
	int n;
	cin >> n;
	a[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		mul(a, i);
		add(a, b);
	}

	int flag = 0;
	for (int i = 1000; i >=1; i--)
	{
		if (b[i] != 0)
		{
			flag = 1;
		}
		if (flag != 0)
			cout << b[i];
	}

	return 0;
}
