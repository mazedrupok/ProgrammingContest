#include <iostream>
using namespace std;
typedef long long LL;
int main ()
{
    LL n, k, x, temp;
    cin >> n >> k;
    x = n;
    temp = x %k;
    x = x + (k-temp);
    cout << x << endl;
    return 0;
}
