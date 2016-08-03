#include <bits/stdc++.h>
using namespace std;
#define LL long long
int a[100005];
int b[100005];
int n, m;
bool func (LL p) {
    int i, j;
    for (i = 0, j = 0; i < n && j < m; ) {
        LL temp = (LL) a[i] - (LL) b[j];
        if (temp < 0) temp = -temp;

        if (temp <= (LL) p) i++;
        else j++;
    }
    if (i == n) return 1;
    else return 0;
}
int bin_ser () {
    LL lo = 0, hi = 2e9 + 5;
    LL mid;
    int cnt = 35;
    while (cnt--) {
        mid = (lo+hi) >> 1;
        if (func(mid) == 0) {
            lo = mid+1;
        }
        else hi = mid;
    }
    return mid;
}
int main ()
{
    //freopen ("in.txt", "r", stdin);
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        cout << bin_ser() << endl;
    }
    return 0;
}
