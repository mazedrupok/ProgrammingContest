#include <bits/stdc++.h>
using namespace std;
int ara[110], n;
int dp[110][10];
int func (int i, int p) {
    if (i == n) return 0;
    if (dp[i][p] != -1) return dp[i][p];
    int v1 = 1000, v2 = 1000;

    if (ara[i] == 0) return 1 + func (i+1, 0);
    else if (ara[i] == 1) {
        if (ara[i] == p) v1 = 1 + func (i+1, 0);
        else v2 = func (i+1, ara[i]);
    }
    else if (ara[i] == 2) {
        if (ara[i] == p) v1 = 1 + func (i+1, 0);
        else v2 = func (i+1, ara[i]);
    }
    else if (ara[i] == 3) {
        if (p == 1) {
            v1 = 1+func (i+1, 0);
            v2 = func (i+1, 2);
        }
        else if (p == 2) {
            v1 = 1+func (i+1, 0);
            v2 = func (i+1, 1);
        }
        else if (p == 0) {
            v1 = func (i+1, 1);
            v2 = func (i+1, 2);
        }
    }
    return dp[i][p] = min (v1, v2);
}
int main ()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    memset (dp, -1, sizeof (dp));
    cout << func (0, 0) << endl;
}
