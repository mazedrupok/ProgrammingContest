#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, mx, x, y, cnt;
    while (cin >> n) {
        mx = 0; cnt = 0; y = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x > y) cnt++;
            else cnt = 1;
            y = x;
            if (cnt > mx ) mx = cnt;
        }
        cout << mx << endl;
    }
    return 0;
}
