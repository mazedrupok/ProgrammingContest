#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
#define LL long long
const int N = 200005;
bool visit[101];
int ara[101];
int main()
{
    //ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int mn = 1e9; int mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
        mx = max (mx, ara[i]);
        mn = min (mn, ara[i]);
    }
    int m = mn + mx;
    memset (visit, 0, sizeof (visit));
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (ara[i] + ara[j] == m && visit[i] == 0 && visit[j] == 0) {
                cout << i+1 << " " << j+1 << endl;
                visit[i] = 1;
                visit[j] = 1;
                break;
            }
        }
    }
    return 0;
}
