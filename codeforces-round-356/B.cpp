#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int ara[n+1];
    ara[0] = 0;
    for (int i = 1; i <= n; i++) cin >> ara[i];
    int res = 0, left, right;
    if (ara[a] == 1) res++;
    for (int i = 1; i < n; i++) {
       if (a-i < 1 && a+i > n) break;
       else if (a-i < 1 && a+i <= n) {
          if (ara[a+i] == 1) res++;
       }
       else if (a-i >= 1 && a+i > n) {
          if (ara[a-i] == 1) res++;
       }
       else if (a-i >= 1 && a+i <= n) {
          if (ara[a-i] == 1 && ara[a+i] == 1) res += 2;
       }
    }
    cout << res << endl;
    return 0;
}
