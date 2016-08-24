#include <bits//stdc++.h>
#include <math.h>
using namespace std;
int ara[100001];
int main()
{
    int n, a, x;
    cin >> n >> a;
    for(int i = 0; i < n; i++) {
        cin >> x;
        ara[i] = x;
    }
    sort(ara, ara+n);
    int p = 0, q =0;
    for(int i = 0; i < n - 2; i++) {
        p += abs(ara[i] - ara[i+1]);
    }
    for(int i = 1; i < n - 1; i++) {
        q += abs(ara[i] - ara[i + 1]);
    }
    p = min(p + abs(ara[0] - a), p + abs (ara[n - 2] - a));
    q = min(q + abs(ara[1] - a), q + abs (ara[n - 1] - a));
    if(n == 1) cout << "0\n";
    else cout<< min(p, q) << endl;
}
