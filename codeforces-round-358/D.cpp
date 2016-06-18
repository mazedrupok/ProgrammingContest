/**
 Name:     Md. Abdul Mazed (RUPOK)
           Noakhali Science & Technology University
 Email:    mazedrupok@gmail.com || mazed4g@gmail.com
 FB id:    www.facebook.com/mazedrupok
 github:   www.github.com/mazedrupok
 problem:  http://codeforces.com/contest/682/problem/D
*/
#include <bits//stdc++.h>
using namespace std;
#define MX 100005
#define read(f)  freopen(f,"r",stdin)
#define write(f) freopen(f,"w",stdout)
#define LL long long
#define ULL unsigned long long
#define inf        INT_MAX
#define mod        1000000007
#define PI         acos(-1.0)
#define set0(ar)   memset(ar,0,sizeof ar)
#define set1(ar)   memset(ar,1,sizeof ar)
#define setneg(a)  memset(a,-1,sizeof(a))
#define setinf(ar) memset(ar,126,sizeof ar)
template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int n, m, k;
string s, t;
int dp[1005][1005][11][2];

int solve(int i, int j, int taken, int done) {
    if (i >= n || j >= m || taken >= k) {
        return 0;
    }
    if (dp[i][j][taken][done] != -1) {
        return dp[i][j][taken][done];
    }

    int a = -1, b = -1, c = -1;
    if (s[i] == t[j]) {
        a = 1 + solve(i + 1, j + 1, taken, 1);
    }
    b = solve(i + 1, j, taken + done, 0);
    c = solve(i, j + 1, taken + done, 0);
    return dp[i][j][taken][done] = max(a, max(b, c));
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    setneg(dp);
    cin >> n >> m >> k >> s >> t;
    cout << solve(0, 0, 0, 0) << endl;

    return 0;
}
