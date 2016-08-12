#include <bits/stdc++.h>
using namespace std;
#define LL long long
int bet[100005];
bool visit[100005] = {0};
int main ()
{
    int n, k, x;
    LL sum = 0, res = 0;
    cin >> n >> k;
    bet[0] = 0;
    bet[n+1] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> bet[i];
        sum += bet[i];
    }
    for (int i = 1; i <= k; i++) {
        cin >> x;
        visit[x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (visit[i] == 1) {
            res += (bet[i] * (sum-bet[i]));
            sum = sum - bet[i];
        }
        else if (visit[i+1] == 0) {
            res += (bet[i] * bet[i+1]);
        }
    }
    if (visit[1] == 0 && visit[n] == 0) {
        res += (bet[1] * bet[n]);
    }
    cout << res << endl;
    return 0;
}

