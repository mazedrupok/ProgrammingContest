#include <bits/stdc++.h>
using namespace std;
#define LL long long
int ara[100001] = {0};
int vis[100001] = {0};
map <int, int > mp;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        vis[x]++;
    }
    ara[0] = 0;
    for (int i = 1; i < 100001; i++) {
        ara[i] = ara[i-1] + vis[i];
    }
    int q;
    cin >> q;
    while (q--) {
        cin >> x;
        if (x > 100000) {
            cout << ara[100000] << endl;
        }
        else cout << ara[x] << endl;
    }
    return 0;
}
