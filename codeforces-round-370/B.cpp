#include <bits/stdc++.h>
using namespace std;
#define LL long long
string s;
int main ()
{
    cin >> s;
    int L = 0, R = 0, U = 0, D = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'L') L++;
        else if (s[i] == 'R') R++;
        else if (s[i] == 'U') U++;
        else if (s[i] == 'D') D++;
    }
    L = abs (L - R);
    U = abs (U - D);
    L = L+U;
    if (L %2 == 1) cout << "-1\n";
    else {
        cout << L/2 << endl;
    }
    return 0;
}
