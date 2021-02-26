#include <bits//stdc++.h>
using namespace std;
#define MX 100005
#define read(f)  freopen(f,"r",stdin)
#define write(f) freopen(f,"w",stdout)
#define LL long long
#define ULL unsigned long long
#define inf        INT_MAX
#define mod        1000000007
#define gama       0.57721566490
const double EPS = 1e-9;
int ara[100005];
int main ()
{
  //ios::sync_with_stdio(0); cin.tie(0);
  //read("in.txt"); //write("out.txt");
    int tc, cs = 0, n, m;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %d %d", &n, &m);
        for (int i = 0; i < n; i++) {
            scanf (" %d", &ara[i]);

        }

    }

    return 0;
}

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
 problem:
 Catagory:
*/
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

#define DDD(x,y,z) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<" | "#z" ="<<z<<endl;
#define DD(x,y) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<endl;
#define D(x) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;

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

template <class T> inline T bigpow(T p,T e,T M){ //(p^e) %M
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
long long mulmod(long long a,long long b,long long c){ //multiplication overflows 
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b){return (a*b)/gcd(a,b);}
template <class T> inline T modinverse(T a,T M){return bigpow(a,M-2,M);}
template <class T> inline T bpow(T p,T e){LL ret=1;for(;e>0;e>>=1){if(e&1)ret=(ret*p);p=(p*p);}return(T)ret;}
template<class T> string to_str(T t){stringstream ss; ss<<t; return ss.str();}

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
    cout << "Hello";

    return 0;
}



/* 
//Disjoint set, Union find
int parent[1000], Rank[1000];
int Find(int x){
    return parent[x] = (parent[x] == x ? x : Find(parent[x]));
}
bool check(int a, int b){ return Find(a) == Find(b); }
void Union(int p, int q) {
    parent[Find(p)] = Find(q);
}
void UnionByRank(int p, int q){
    p = Find(p);
    q = Find(q);
    if(Rank[p] < Rank[q]) parent[p] = q;
    else parent[q] = p;
    if(Rank[p] == Rank[q]) Rank[p]++;
}
*/

/*

int prime[187]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,
                79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,
                163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,
                251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,
                349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,
                443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,
                557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,
                647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,
                757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,
                863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,
                983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,
                1069,1087,1091,1093,1097,1103,1109,1117};

const LL mod[]= {0,1000000007,1000000009,1000000021,1000000033,1000000097,1000000093,1000000097,1000000103};
const LL base[]= {0,1000003,1000033,1000037,1000039,1000081,1000099,1000117,1000121};

struct node {
    int val; string s;
    node () {}
    node (int a, string b) {val = a; s = b;}
    bool operator < (const node &p) const {
        if (val == p.val) return p.s < s;
        else return p.val < val;
    } //small to large
};
inline bool comp(const Data &a, const Data &b) {
	return a.n < b.n;
} //small to large
	
*/

/*
Mirror palindrome

map <char, char> m;
   m['A']='A';
   m['b'] = 'd';
   m['d'] = 'b';
// m['E']='3';
   m['H']='H';
   m['I']='I';
// m['i']='i';
// m['J']='L';
// m['L']='J';
// m['l']='l';
   m['M']='M';
// m['m'] = 'm';
// m['n'] = 'n';
   m['O']='O';
   m['o']='o';
   m['p']='q';
   m['q']='p';
// m['S']='2';
   m['T']='T';
   m['U']='U';
// m['u']='u';
   m['V']='V';
   m['v']='v';
   m['W']='W';
   m['w']='w';
   m['X']='X';
   m['x']='x';
   m['Y']='Y';
// m['Z']='5';
// m['0']='0';
// m['1']='1';
// m['2']='S';
// m['3']='E';
// m['5']='Z';
// m['8']='8';

*/
/*
#include <ctime>
using namespace std;
int main() {
    clock_t start;
    double duration;
    start = clock();
    /* Your algorithm here */
    duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<<"Time: "<< duration <<'\n';
}
*/
