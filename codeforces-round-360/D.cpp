/**
   MMM   MMM     A     ZZZZZZZ EEEEEEE DDDDD
   MM MMM MM    AAA    Z   ZZ  EE    E DDDDDDD
   MM  M  MM   AA AA      ZZ   EEEE    DD   DD
   MM     MM  AAAAAAA   ZZ   Z EE    E DDDDDDD
   MMM   MMM AA     AA ZZZZZZZ EEEEEEE DDDDD

 Name:     Md. Abdul Mazed (RUPOK)
           Noakhali Science & Technology University
 Email:    mazedrupok@gmail.com || mazed4g@gmail.com
 FB id:    www.facebook.com/mazedrupok
 github:   www.github.com/mazedrupok
*/
#include <bits//stdc++.h>
using namespace std;
#define read(f)  freopen(f,"r",stdin)
#define write(f) freopen(f,"w",stdout)
#define LL long long
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b){return (a*b)/gcd(a,b);}
/****************************** END OF TEMPLATE ******************************/
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0);
    //read ("in.txt");
    LL n, k, r, cur = 1;
    while (cin >> n >> k) {
        for (int i = 0; i < n; i++) {
            cin >> r;
            cur = gcd(k, lcm(cur, r));
        }
        if (cur == k) cout << "Yes\n";
        else cout << "No\n";
        //cout << cur << endl;
    }
    return 0;
}
