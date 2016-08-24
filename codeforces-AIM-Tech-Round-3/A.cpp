#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    int n, b, d, sum = 0, x;
    cin >> n >> b >> d;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > b) continue;
        sum += x;
        if (sum > d) {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
