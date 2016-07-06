/**
   MMM   MMM     A     ZZZZZZZ EEEEEEE DDDDD
   MM MMM MM    AAA    Z   ZZ  EE    E DDDDDDD
   MM  M  MM   AA AA      ZZ   EEEE    DD   DD
   MM     MM  AAAAAAA   ZZ   Z EE    E DDDDDDD
   MMM   MMM AA     AA ZZZZZZZ EEEEEEE DDDDD

 Name:     Md. Abdul Mazed (RUPOK)
 Varsity:  Noakhali Science & Technology University
 Email:    mazedrupok@gmail.com || mazed4g@gmail.com
 FB id:    www.facebook.com/mazedrupok
 github:   www.github.com/mazedrupok
*/
#include <bits//stdc++.h>
using namespace std;
#define read(f)  freopen(f,"r",stdin)
#define write(f) freopen(f,"w",stdout)
#define LL long long
#define ULL unsigned long long
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair

int ara[501];
bool dp[501][501][501];
set<int> st;
void func (int i, int value, int make) {
    if (make == 0) {st.insert (value); return;}
    if (i < 0 || make < 0 || dp[i][value][make]) return;

    dp[i][value][make] = 1;
    func (i-1, value, make);
    func (i-1, value, make-ara[i]);
    func (i-1, value-ara[i], make-ara[i]);
}
int main ()
{
    //ios::sync_with_stdio(0); cin.tie(0);
    //read ("in.txt");
    int n, k;
    while (cin >> n >> k) {
        for (int i = 0; i < n; i++) cin >> ara[i];
        func (n-1, k, k);
        cout << st.size() << endl;
        set<int> ::iterator it;
        for (it = st.begin(); it != st.end(); it++) {
            cout << *it << " ";
        } cout << endl;
        st.clear();
    }
    return 0;
}
