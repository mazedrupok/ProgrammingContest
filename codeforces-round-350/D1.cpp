#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int cur[n];
    memset (cur, 0, sizeof (cur));
    int temp = true, cnt = 0;
    while (temp == true) {
        for (int i = 0; i < n; i++) {
            cur[i] += a[i];
            while (cur[i] > b[i] && k > 0) {
                k--;
                b[i]++;
            }
            if (k <= 0 && cur[i] > b[i]) {
                temp = false;
                break;
            }
        }
        if (temp == true) cnt++;
    }
    cout << cnt << endl;
}


