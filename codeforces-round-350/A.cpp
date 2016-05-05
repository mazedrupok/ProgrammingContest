#include <bits//stdc++.h>
using namespace std;


int main ()
{
    int n, mn, mx;
    cin >> n;
    int a = n / 7;
    mn = a*2;
    mx = a*2;
    if (n %7 == 1) {
        mx += 1;
    }
    if (n %7 == 6) mn += 1;

    if (n %7 >= 2) mx += 2;

    cout << mn << " " << mx << endl;
}
