#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int lim = 2e9 + 5;
map <int, int> mp;
int main ()
{
    int n, mx, x, y;
    LL cnt;
    while (cin >> n) {
        cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            for (LL j = 1; j < (LL) lim; j *= 2) {
                int temp = (int)j - x;
                if (mp.count (temp) != 0)
                    cnt += mp[temp];
            }
            mp[x]++;
        }
        cout << cnt << endl;
        mp.clear();
    }
    return 0;
}
