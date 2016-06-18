#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll a, b, m, n;
    cin >> a >> b;
    int ca, cb;
    ca = cb = 0;
    m = a; n = b;
    while (m) {
        m /= 2;
        ca++;
    }
    while (n) {
        n /= 2;
        cb++;
    }
    int cnt;
    if (ca == cb) cnt = ca-1;
    else cnt = ca+cb-2;
    string s, t;
    for (int i = 0; i < ca; i++) {
        s += '1';
    }
    for (int i = 0; i < cb; i++) {
        t += '1';
    }
    ll tem = 0;
    for (int i = ca-2; i >= 0; i--) {
        s[i] = '0';
        tem = 0;
        for (int j = 0; j < ca; j++) {
            if (s[j] == '1') {
                ll temp = 1;
                for (int k = 0; k < j; k++) temp *= 2;
                tem += temp;
            }
        }
        if (tem < a) cnt--;
        s[i] = '1';
    }
    for (int i = cb-2; i >= 0; i--) {
        t[i] = '0';
        tem = 0;
        for (int j = 0; j < cb; j++) {
            if (t[j] == '1') {
                ll temp = 1;
                for (int k = 0; k < j; k++) temp *= 2;
                tem += temp;
            }
        }
        if (tem > b) cnt--;
        t[i] = '1';
    }
    for (int i = ca+1; i < cb; i++) {
        cnt += (i-1);
    }
    cout << cnt;
    return 0;
}
