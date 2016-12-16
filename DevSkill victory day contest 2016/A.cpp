#include <bits/stdc++.h>
using namespace std;
#define LL unsigned long long
int main() {
	LL a, b, res;
	int tc;
	scanf (" %d", &tc);
	while (tc--) {
        cin >> a >> b;
        //cout << a << b << endl;
        res = (a>>1) + (b>>1);
        if (a %2 == 1 && b %2 == 1) res++;
        cout << res << "\n";
	}
	return 0;
}
