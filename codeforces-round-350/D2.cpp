#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define mx 5e9+10
int ara[2][100000];
bool func (LL cnt, LL n, LL k) {
    LL sum = 0;
    for (int i = 0; i < n; i++) {
        sum += max (0LL, cnt*ara[0][i] - ara[1][i]);  //summing k
        if (sum > k) {  //if (cnt*ara[0][i] > ara[1][i] + k)
            return 0;
        }
    }
    return 1;
}
int main ()
{
    LL n, k, a, b;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> ara[0][i];
    for (int i = 0; i < n; i++) cin >> ara[1][i];

    LL lo = 0, hi = mx, mid, res = 0;
    while (lo <= hi) {
        mid = (lo+hi) /2;
        if (func(mid, n, k) == 1) {
            res = mid;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }
    cout << res << endl;
    return 0;
}
