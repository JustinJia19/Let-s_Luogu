#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> prize(7);
	vector<vector<int>> getNum(n, vector<int>(7));
	for (int i = 0; i < prize.size(); i++) {
		cin >> prize[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> getNum[i][j];
		}
	}
	sort(prize.begin(), prize.end());
	for (vector<int>& row : getNum) {
		sort(row.begin(), row.end());
	}
	vector<int> win(7,0);
	
	for (int i = 0; i < n; i++) {
		int beginPrize = 0;
		int beginGet = 0;
		int count = 0;
		while (beginPrize != 7 && beginGet != 7) {
			if (getNum[i][beginGet] < prize[beginPrize]) beginGet++;
			if (getNum[i][beginGet] > prize[beginPrize]) beginPrize++;
			if (getNum[i][beginGet] == prize[beginPrize]) {
				count++;
				beginGet++;
				beginPrize++;
			}
		}	
		if (count != 0) win[count - 1]++;
	}
	for (int i = 6; i >=0; i--) {
			cout << win[i] << " ";
	}
}
