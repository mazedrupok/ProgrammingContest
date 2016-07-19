#include <bits/stdc++.h>
using namespace std;
char s[1001][1001];
int main ()
{
    int cntR[1001], cntC[1001];
    memset (cntR, 0, sizeof (cntR));
    memset (cntC, 0, sizeof (cntC));
    int r, c, cnt = 0;
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> s[i][j];
            if (s[i][j] == '*') {
                cnt++;
                cntR[i]++;
                cntC[j]++;
            }
        }
    }
    int test = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == '*') {
                if (cntR[i] + cntC[j] > cnt) {test = 1; r = i+1; c = j+1; break;}
            }
            else {
                if (cntR[i] + cntC[j] == cnt) {test = 1; r = i+1; c = j+1; break;}
            }
        }
    }
    if (test == 1) {
        cout << "YES" << endl;
        cout << r << " " << c << endl;
    }
    else cout << "NO" << endl;
}

