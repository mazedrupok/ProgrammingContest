#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int mx = -1;
    int mn = -1;
    ll lo = 1, hi = 1e9;
    while(lo <= hi) {
        int mid = (lo + hi) >> 1;
        ll taken = 0, given = 0;

        for(int i = 0; i < n; i++) {
            if(mid > a[i]) given += mid - a[i];
            else taken += a[i] - mid;
        }

        if(given <= k && taken >= given) {lo = mid + 1; mn = mid;}
        else hi = mid - 1;
    }

    lo = 1, hi = 1e9;
    while(lo <= hi) {
        int mid = (lo + hi) >> 1;
        ll taken = 0, given = 0;

        for(int i = 0; i < n; i++) {
            if(mid > a[i]) given += mid - a[i];
            else taken += a[i] - mid;
        }

        if(taken <= k && taken <= given) {hi = mid - 1; mx = mid;}
        else lo = mid + 1;
    }
    cout << mx - mn;
    return 0;
}
