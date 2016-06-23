#include <iostream>
using namespace std;
typedef long long LL;
int main ()
{
    int n;
    LL sum;
    cin >> n; cin >> sum;
    int cnt = 0;
    char ch; LL x;
    while (n--) {
        cin >> ch >> x;
        if (ch == '+') sum += x;
        else if (ch == '-') {
            if (sum - x < 0) {cnt++; continue;}
            sum -= x;
        }
    }
    cout << sum << " " << cnt;
    return 0;

}
