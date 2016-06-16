#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector <int> vc;
LL gcd (LL a, LL b) {
   if (a == 0) return b;
   if (b == 0) return a;
   return gcd ( (a<b) ? b%a: a%b, (a < b)? a : b);
}
void primeFactors(int n) {
    while (n%2 == 0) {
        if (vc.size() == 0) vc.push_back (2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2) {
        while (n%i == 0) {
            if (vc.size() == 0) vc.push_back (i);
            else if (i != vc[vc.size()-1]) vc.push_back (i);

            n = n/i;
        }
    }
    if (n > 2) vc.push_back (n);
}
int main()
{
    int tc, n, k;
    scanf (" %d", &tc);
    while (tc--) {
        cin >> n >> k;
        primeFactors(n);

        LL p = n*k - n;
        LL res = p /vc[0];
        LL g, lcm;
        if (vc.size() > 1) {
            g = gcd (vc[0], vc[1]);
            lcm = (vc[0] * vc[1]) / g;
            res += (p /vc[1]);
            res -= (p /lcm);
        }
        for (int i = 2; i < vc.size(); i++) {
            g = gcd (lcm, vc[i]);
            lcm = (lcm * vc[i]) / g;
            res += (p /vc[i]);
            for (int j = 0; j < i; j++) {
               g = gcd (vc[j], vc[i]);
               lcm = (vc[j] * vc[i]) / g;
               res -= (p /lcm);
            }
        }
        cout << p - res << endl;
        vc.clear();
    }
    return 0;
}


