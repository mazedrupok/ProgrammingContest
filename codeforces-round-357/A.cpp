#include <bits/stdc++.h>
using namespace std;
#define MX 100005
typedef long long LL;
int main ()
{
    int n, a, b;
    string s;
    cin >> n;
    bool temp = false;
    while (n--) {
        cin >> s >> a >> b;
        if (a >= 2400 && b > a) temp = true;
    }
    if (temp == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
