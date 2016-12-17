#include <bits//stdc++.h>
using namespace std;
#define ll long long
#define N 3
ll mat[N][N];
ll mod = 1000000009;
void setMat (ll temp[][N]) {
    temp[0][0] = 3; temp[0][1] = 6; temp[0][2] = 9;
    temp[1][0] = 4; temp[1][1] = 7; temp[1][2] = 10;
    temp[2][0] = 5; temp[2][1] = 8; temp[2][2] = 11;
}
void bigmod (int e) {  //mat ^e %mod
    if (e <= 1) return;
    bigmod (e >> 1);
    ll tt[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ll sum = 0;
            for (int k = 0; k < N; k++) sum += (mat[i][k] * mat[k][j]) %mod;
            tt[i][j] = sum %mod;
        }
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            mat[i][j] = tt[i][j];

    if (e %2 == 1) { //if odd one more multiply with previous square
        ll temp[N][N];
        for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) temp[i][j] = 0;
        setMat (temp);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                ll sum = 0;
                for (int k = 0; k < N; k++) sum += (tt[i][k] * temp[k][j]) %mod;
                mat[i][j] = sum %mod;
            }
        }
    }
}

int main ()
{
    int tc, cs = 0, n, m, res;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %d", &n);
        if (n == 1) {
            printf ("3\n"); continue;
        }
        setMat (mat);
        bigmod (n-1);
        ll sum = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                sum += mat[i][j] %mod;
            }
        }
        printf ("%lld\n", sum %mod);
    }
    return 0;
}
