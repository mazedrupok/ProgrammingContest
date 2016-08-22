#include <bits/stdc++.h>
using namespace std;
#define piter 0
#define octo 1
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    int n, x, f, s;
    cin >> n;
    int test = piter;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (test == piter) {
            if (x > 1 && x %2 == 0) test = piter;
            else test = octo;
        }
        else {
            if (x > 1 && x %2 == 0) test = octo;
            else test = piter;
        }
        if (test == piter) {
            cout << "1\n";
            test = octo;
            }
        else {
            cout << "2\n";
            test = piter;
        }
    }

    return 0;
}
