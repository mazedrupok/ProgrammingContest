#include <iostream>
using namespace std;
int main ()
{
    int t, x, s;
    while (cin >> t >> x >> s) {
        if (t == s) cout << "YES" << endl;
        else if (s < t || s-x < t) {
            cout << "NO" << endl;
        }
        else {
            s -= t;
            if (s %x == 0 || s %x == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
