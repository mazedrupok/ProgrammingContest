#include <iostream>
using namespace std;
typedef long long LL;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int ara[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> ara[i];
    }
    int l, r;
    int temp = false, cnt = 0;
    while (temp == false) {
        if (cnt > 20000) break;
        temp = true;
        for (int i = 1; i < n; i++) {
            if (ara[i+1] < ara[i]) {
                r = i+1; l = i;
                if ((r-l+1) %2 == 0) {
                    swap (ara[l], ara[r]);
                    cout << l << " " << r << endl;
                    cnt++;
                    temp = false;
                }
                else {
                    r += 2;
                    while (r <= n && (r-l+1) %2 == 1) {
                        r += 2;
                    }
                    if (r <= n) {
                        for (int k = l; k <= r; k += 2) swap (ara[k], ara[k+1]);
                        cout << l << " " << r << endl;
                        cnt++;
                        temp = false;
                    }
                    if (temp == true) {
                        l -= 2;
                        while (l >= 1 && (r-l+1) %2 == 1) l -= 2;
                        if (l >= 1) {
                            for (int k = l; k <= r; k += 2) swap (ara[k], ara[k+1]);
                            cout << l << " " << r << endl;
                            cnt++;
                            temp = false;
                        }
                    }
                }
            }
        }
    }
    //for (int i = 1; i <= n; i++) cout << ara[i] << " ";
    return 0;

}
