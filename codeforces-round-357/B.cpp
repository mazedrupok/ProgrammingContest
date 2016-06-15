#include <bits/stdc++.h>
using namespace std;
#define MX 1e9
typedef long long LL;
int main ()
{
    int n, p;
    cin >> n;
    bool temp = 0;
    for (int i = 0; i <= MX; i += 1234567) {
        for (int j = 0; j <= MX; j += 123456) {
            p = n - (i+j);
            if (p < 0) break;
            if (p %1234 == 0) {temp = 1; break;}
        }
        if (temp == 1) break;
    }
    if (temp == 1) cout << "YES";
    else cout << "NO";

    return 0;
}
