#include <bits//stdc++.h>
using namespace std;

#define asort(v)   sort(v.begin(), v.end())
#define dsort(v)   sort(v.begin(), v.end(), [](int a, int b){return a > b;})
#define bitcount   __builtin_popcount
#define MAX 100005
#define read(f)  freopen(f,"r",stdin)
#define write(f) freopen(f,"w",stdout)
#define LL long long
#define ULL unsigned long long
#define inf        INT_MAX
#define mod        1000000007
#define PI         acos(-1.0)
#define sqr(x)     ((x)*(x))
#define sqrt(x)    sqrt(1.0*(x))

#define s1(a) scanf("%d",&a)
#define s2(a,b) scanf("%d %d",&a,&b)
#define s3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl1(a) scanf("%I64d",&a)
#define sl2(a,b) scanf("%I64d %I64d",&a,&b)
#define sl3(a,b,c) scanf("%I64d %I64d %I64d",&a,&b,&c)
#define sd1(a) scanf("%lf",&a)
#define sd2(a,b) scanf("%lf %lf",&a,&b)
#define sd3(a,b,c) scanf("%lf %lf %lf",&a,&b,&c)

#define set0(ar)   memset(ar,0,sizeof ar)
#define set1(ar)   memset(ar,1,sizeof ar)
#define setneg(a)  memset(a,-1,sizeof(a))
#define setinf(ar) memset(ar,126,sizeof ar)//long long, 63 for Int

#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define forit(it,s) for(__typeof(s.begin()) it=s.begin();it!=s.end();it++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair
#define emb emplace_back
	//its for vector push. if same value pushed then value wont be pushed.
#define LB(a,x) (lower_bound(all(a),x)-a.begin()) //first element in the range [first,last) which does not compare less than val.
#define UB(a,x) (upper_bound(all(a),x)-a.begin()) //first element in the range [first,last) which compares greater than val.

template <class T> inline T Set(T N,T pos){return N=N | (1<<pos);}
template <class T> inline T reset(T N,T pos){return N=N & ~(1<<pos);}
template <class T> inline bool check(T N,T pos){return (bool)(N & (1<<pos));}

template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b){return (a*b)/gcd(a,b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
template <class T> inline T bpow(T p,T e){LL ret=1;for(;e>0;e>>=1){if(e&1)ret=(ret*p);p=(p*p);}return(T)ret;}

inline bool ispow2(int x){return (x!=0 && (x&(x-1))==0);}
void extended_euclid(LL a,LL b,LL &x,LL &y){if(!b){x = 1, y = 0; return;} LL xx,yy;extended_euclid(b,a%b,xx,yy);x = yy;y = xx-(a/b)*yy;}
pair<LL, pair<LL, LL> > extendedEuclid(LL a, LL b) {
   LL x = 1, y = 0; LL xLast = 0, yLast = 1; LL q, r, m, n;
   while(a != 0) {q = b / a; r = b % a; m = xLast - q * x; n = yLast - q * y; xLast = x, yLast = y; x = m, y = n; b = a, a = r; }
   return make_pair(b, make_pair(xLast, yLast));
}

///int mnth[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
///int dx8[]={1,1,0,-1,-1,-1,0,1}; int dy8[]={0,1,1,1,0,-1,-1,-1}; //8 direction
///int dxk[]={2,1,-1,-2,-2,-1,1,2}; int dyk[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
///int dx6[]={-1,+1,0,1,0,-1}; int dy6[]={-1,+1,1,0,-1,0};//Hexagonal Direction
///int dx4[]={0,0,-1,1}; int dy4[]={1,-1,0,0}; //4 direction
/****************************** END OF TEMPLATE ******************************/

const double EPS = 1e-9;

int main ()
{
    //ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    int n, tc, mx, cs = 0, m;

    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %d %d", &n, &m);
        LL sum = 0, a;
        LL mx = 0, t2, t1;
        for (int i = 0; i < n; i++) {
            scanf (" %lld", &a);
            sum += a;
            if (i == n-1) {
                t1  = a;
            }
        }
        for (int i = 0; i < m; i++) {
            scanf (" %lld", &a);
            sum += a;
            if (i == m-1) {
                t2  = a;
            }
        }
        mx = max (t1, t2);
        sum -= mx;
        printf ("Case %d: %lld\n", ++cs, sum);
     }
    return 0;
}

