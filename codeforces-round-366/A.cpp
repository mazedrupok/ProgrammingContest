#include <bits/stdc++.h>
using namespace std;
int vis[300001] = {0};
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    int n;
    cin >> n;
    int test = 0;
    for (int i = 1; i <= n; i++) {
        if (test == 1) cout << "that "; test = 1;
        if (i %2 == 1) cout << "I hate ";
        else cout << "I love ";
    }
    cout << "it" << endl;
    return 0;
}
