#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, x;
    while (cin >> n) {
        int cnt = 0;
        if (n == 1) {
            cin >> x;
            if (x == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0) cnt++;
        }
        if (cnt == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
