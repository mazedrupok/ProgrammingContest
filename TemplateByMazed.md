/**
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
template <class T> inline T bpow(T p,T e){ll ret=1;for(;e>0;e>>=1){if(e&1)ret=(ret*p);p=(p*p);}return(T)ret;}

///int mnth[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
///int dx8[]={1,1,0,-1,-1,-1,0,1}; int dy8[]={0,1,1,1,0,-1,-1,-1}; //8 direction
///int dxk[]={2,1,-1,-2,-2,-1,1,2}; int dyk[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
///int dx6[]={-1,+1,0,1,0,-1}; int dy6[]={-1,+1,1,0,-1,0};//Hexagonal Direction
///int dx4[]={0,0,-1,1}; int dy4[]={1,-1,0,0}; //4 direction

const double EPS = 1e-9;

int main ()
{
    //ios::sync_with_stdio(0); cin.tie(0);


    return 0;
}
