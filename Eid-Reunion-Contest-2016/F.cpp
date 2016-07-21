#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define Pi (double) 2 * acos(0)
#define sin(a) sin(a * Pi / 180)
#define acosdeg(a) acos(a)/(Pi /180)

int main ()
{
    double L, W , R , ans , res;
    int tc, cs = 0;
    scanf (" %d", &tc);
    while (tc-- ) {
        scanf("%lf %lf %lf", &L, &W, &R);
        double tem = acosdeg(W/(2 * R));
        tem *= 2;
        res = ((R * R) / 2) *(Pi * (tem / 180) - sin(tem));
        res = (Pi * R * R) - (res * 2);
        printf("Case %d: %.6lf\n", ++cs, res);
    }
    return 0;
}


