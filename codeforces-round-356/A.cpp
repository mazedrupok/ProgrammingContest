#include <bits/stdc++.h>
using namespace std;
int mp[200] = {0};
int main() {
    int ara[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
      scanf (" %d", &ara[i]);
      sum += ara[i];
      mp[ara[i]]++;
    }
    int mx = 0;
    for (int i = 0; i < 101; i++) {
       if (mp[i] == 2) {
          mx = max (i*2, mx);
       }
       else if (mp[i] > 2) {
          mx = max (i*3, mx);
       }
    }
    cout << sum-mx << endl;
    return 0;
}
