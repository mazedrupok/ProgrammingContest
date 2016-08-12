#include <bits/stdc++.h>
using namespace std;
#define LL long long
int ara[100001];
double dist (int x, int y, int x1, int y1) {
    return sqrt ((x-x1)*(x-x1) + (y-y1)*(y-y1));
}
int main ()
{
    int n, x, y, x1, y1;
    double res, t, mn = 1e9, v;
    cin >> x >> y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> v;
        t = dist (x, y, x1, y1);
        t /= v;
        if (t < mn) mn = t;
    }
    printf ("%.10f\n", mn);
    return 0;
}
