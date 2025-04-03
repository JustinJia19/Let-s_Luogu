#include <iostream>

using namespace std;

int a[100][2];
int c[10001];

int main() {
    int l, m;
    cin >> l >> m;

    for (int i = 0; i <= l; i++) {
        c[i] = 1;
    }

    for (int i = 0; i < m; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    for (int i = 0; i < m; i++) {
        int ac = a[i][0];
        int bc = a[i][1];
        for (int j = ac; j <= bc; j++) {
            c[j] = 0;
        }
    }

    int n = 0;
    for (int i = 0; i <= l; i++) {
        if (c[i] == 1) {
            n++;
        }
    }

    cout << n;

    return 0;
}
