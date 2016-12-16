#include <bits/stdc++.h>
using namespace std;
#define LL unsigned long long
int main() {
	string s;
	int tc, a, num, cnt, cs = 0;
	cin >> tc;
	while (tc--) {
        cin >> s;
        cin >> a;
        num = 0;
        for (int i = 0; s[i]; i++) {
            num *= 10;
            if (s[i] == 'A') num += 0;
            else if (s[i] == 'B') num += 1;
            else if (s[i] == 'C') num += 2;
            else if (s[i] == 'D') num += 3;
            else if (s[i] == 'E') num += 4;
            else if (s[i] == 'F') num += 5;
            else if (s[i] == 'G') num += 6;
            else if (s[i] == 'H') num += 7;
            else if (s[i] == 'I') num += 8;
        }
        //cout << num << endl;
        cnt = 0;
        for (int i = a; i <= num; i *= a) {
            cnt += num / i;
        }
        cout << "Case " << ++cs << ": " << cnt << "\n";
	}
	return 0;
}
