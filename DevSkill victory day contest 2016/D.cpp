#include <bits//stdc++.h>
using namespace std;
#define NN 10000100
#define ll long long
ll prime[10000101], primeSize;
bool pri[10000101] = {0};

void gene_prime() { //sieve
    for (int i = 4; i <= NN; i += 2) {
        pri[i] = 1;
    }
    for (int i = 3; i <= NN; i += 2) {
        if (pri[i] == 0) {
            for (int j = i+i; j <= NN; j += i) {
                pri[j] = 1;
            }
        }
    }
    primeSize = 0;
    for (int i = 2; i <= NN; i++) {
        if (pri[i] == 0) prime[primeSize++] = (ll) i;
    }
}
ll factor[10000000];
int main ()
{
    gene_prime ();
    int tc, cs = 0, res;
    ll n;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %lld", &n);
        if (n == 0 || n == 1) {
            printf ("No\n");
            continue;
        }
        int fSize = 0, suru = -1; //factor size & start position
        for (int i = 0; i < primeSize; i++) {
            if (prime[i]*prime[i] > n) break;
            if (n %prime[i] == 0) { //checking prime factor
                factor[fSize++] = prime[i];
                if (suru == -1) suru = i;
                while (n %prime[i] == 0) {
                    n /= prime[i];
                }
            }
        }
        if (n > 1) {
            factor[fSize++] = n;
        }
        if (suru == -1 || fSize == 1) printf ("Yes\n"); //prime
        else {
            bool test = 1;
            for (int i = suru, j = 0; i < primeSize && j < fSize; i++, j++) {
                if (factor[j] != prime[i]) {
                    test = 0;
                    break;
                }
            }
            if (test == 0) printf ("No\n");
            else printf ("Yes\n");
        }
    }
    return 0;
}
