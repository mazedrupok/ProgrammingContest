#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, chis = 0, mis = 0, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a > b) mis++;
        else if (b > a) chis++;
    }
    if (mis > chis) cout << "Mishka" << endl;
    else if (chis > mis) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}
