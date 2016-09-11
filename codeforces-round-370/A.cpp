#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL n, ara[100005] = {0};
int main ()
{
    cin >> n;
    cin >> ara[0];
    for (int i = 1; i < n; i++) {
        cin >> ara[i];
        cout << ara[i] + ara[i-1] << " ";
    }
    cout << ara[n-1];
    return 0;
}
