/**
   Name:  Md. Abdul Mazed (RUPOK)
   Noakhali Science & Technology University
   Email:  mazedrupok@gmail.com || mazed4g@gmail.com
   FB id:  www.facebook.com/mazedrupok
   github: www.github.com/mazedrupok
   problem: http://codeforces.com/contest/611/problem/C
   Catagory:
*/
#include <bits/stdc++.h>
using namespace std;
#define MX 10005
#define read(f) freopen(f, "r", stdin)
#define write(f) freopen(f, "w", stdout)
typedef long long LL;
typedef unsigned long long ULL;
char s[600][600];
int row[600][600] = {0};
int col[600][600] = {0};
int main ()
{
    int r, c, r1, c1, r2, c2, q;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) cin >> s[i][j];
    }
    int cnt = 0;
    for (int i = 1; i <= r; i++) {
        cnt = 0;
        for (int j = 1; j < c; j++) {
            if (j == 1) row[i][j] = 0;
            if (s[i][j] == '.' && s[i][j+1] == '.') cnt++;
            row[i][j+1] = cnt;
        }
    }
    cnt = 0;
    for (int i = 1; i <= c; i++) {
        cnt = 0;
        for (int j = 1; j < r; j++) {
            if (j == 1) col[i][j] = 0;
            if (s[j][i] == '.' && s[j+1][i] == '.') cnt++;
            col[i][j+1] = cnt;
        }
    }
    cin >> q;
    while (q--) {
        cin >> r1 >> c1 >> r2 >> c2;
        cnt = 0;
        for (int i = r1; i <= r2; i++) {
            cnt += (row[i][c2] - row[i][c1]);
        }
        for (int i = c1; i <= c2; i++) {
            cnt += (col[i][r2] - col[i][r1]);
        }
        cout << cnt << endl;
    }
    return 0;
}
