#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n, k;
    cin >> n >> k;
    ll ara[n+1];
    for (int j = 1; j <= n; j++) cin >> ara[j];
    ll i, pos = 1, p = 1, di;
    for (i = 1; pos <= k; i++) {
        p = pos;
        pos = ((i*i) - i+2)/2;
    }
    //cout << i << " " << p << endl;
    di = k - p + 1;
    cout << ara[di] << endl;
}

