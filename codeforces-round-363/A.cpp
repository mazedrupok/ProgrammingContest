#include <bits/stdc++.h>
using namespace std;
const int inf = 2e9;
int ara[200002];
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i= 0; i < n; i++) cin>>ara[i];
    int res = inf, test = 0;

    for(int i = 0; i < n; i++) {
        if(s[i]=='R' && s[i+1]=='L' && ara[i]<ara[i+1])
            res = min(res, (ara[i+1]-ara[i])/2);
    }
    if(res == inf) res = -1;
    cout<<res<<endl;
    return 0;
}
