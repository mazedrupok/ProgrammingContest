/**
   MMM   MMM     A     ZZZZZZZ EEEEEEE DDDDD
   MM MMM MM    AAA    Z   ZZ  EE    E DDDDDDD
   MM  M  MM   AA AA      ZZ   EEEE    DD   DD
   MM     MM  AAAAAAA   ZZ   Z EE    E DDDDDDD
   MM     MM AA     AA ZZZZZZZ EEEEEEE DDDDD

 Name:     Md. Abdul Mazed (RUPOK)
           Noakhali Science & Technology University
 Email:    mazedrupok@gmail.com || mazed4g@gmail.com
 FB id:    www.facebook.com/mazedrupok
 github:   www.github.com/mazedrupok
 problem:
 Catagory:
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
#define setinf(ar) memset(ar,126,sizeof ar)//long long, 63 for Int

string s[101];
int main ()
{
    //ios::sync_with_stdio(0); cin.tie(0);
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < d; i++) cin >> s[i];
    int temp, cnt = 0, mx = 0;
    for (int i = 0; i < d; i++) {
        temp = true;
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '0') {
                temp = false;
                cnt++;
                break;
            }
        }
        mx = max (mx, cnt);
        if (temp == true) {
            cnt = 0;
        }
    }
    cout << mx << endl;
    return 0;
}
