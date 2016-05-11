#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, date, month, year, k = 0, c;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %d %d %d", &date, &month, &year);
        int temp = false;
            if (year %400 == 0) temp = true;
            else if (year %100 == 0) temp = false;
            else if (year %4 == 0) temp = true;

        if(month == 4 && date >= 14) year -= 593;
        else if (month > 4) year -= 593;
        else year -= 594;

        if (month == 1 && date <= 13) {
            month = 9;
            date += 17;
        }
        else if (month == 1 && date > 13) {
            month = 10;
            date -= 13;
        }
        else if (month == 2 && date <= 12) {
            month = 10;
            date += 18;
        }
        else if (month == 2 && date > 12) {
            month = 11;
            date -= 12;
        }
        else if (month == 3 && date <= 14) {
            month = 11;
            if (temp == true) date += 17;
            else date += 16;
        }
        else if (month == 3 && date > 14) {
            month = 12;
            date -= 14;
        }
        else if (month == 4 && date <= 13) {
            month = 12;
            date += 17;
        }
        else if (month == 4 && date > 13) {
            month = 1;
            date -= 13;
        }
        else if (month == 5 && date <= 14) {
            month = 1;
            date += 17;
        }
        else if (month == 5 && date > 14) {
            month = 2;
            date -= 14;
        }
        else if (month == 6 && date <= 14) {
            month = 2;
            date += 17;
        }
        else if (month == 6 && date > 14) {
            month = 3;
            date -= 14;
        }
        else if (month == 7 && date <= 15) {
            month = 3;
            date += 16;
        }
        else if (month == 7 && date > 15) {
            month = 4;
            date -= 15;
        }
        else if (month == 8 && date <= 15) {
            month = 4;
            date += 16;
        }
        else if (month == 8 && date > 15) {
            month = 5;
            date -= 15;
        }
        else if (month == 9 && date <= 15) {
            month = 5;
            date += 16;
        }
        else if (month == 9 && date > 15) {
            month = 6;
            date -= 15;
        }
        else if (month == 10 && date <= 15) {
            month = 6;
            date += 15;
        }
        else if (month == 10 && date > 15) {
            month = 7;
            date -= 15;
        }
        else if (month == 11 && date <= 14) {
            month = 7;
            date += 16;
        }
        else if (month == 11 && date >= 15) {
            month = 8;
            date -= 14;
        }
        else if (month == 12 && date <= 14) {
            month = 8;
            date += 16;
        }
        else if (month == 12 && date >= 15) {
            month = 9;
            date -= 14;
        }

        if (month == 1) {
            printf ("Case %d: %d, Baishakh, %d\n", ++k, date, year);
        }
        else if (month == 2) {
            printf ("Case %d: %d, Jaishtha, %d\n", ++k, date, year);
        }
        else if (month == 3) {
            printf ("Case %d: %d, Ashar, %d\n", ++k, date, year);
        }
        else if (month == 4) {
            printf ("Case %d: %d, Sraban, %d\n",++k, date, year);
        }
        else if (month == 5) {
            printf ("Case %d: %d, Bhadra, %d\n", ++k, date, year);
        }
        else if (month == 6) {
            printf ("Case %d: %d, Ashwin, %d\n", ++k, date, year);
        }
        else if (month == 7) {
            printf ("Case %d: %d, Kartik, %d\n", ++k, date, year);
        }
        else if (month == 8) {
            printf ("Case %d: %d, Agrahayan, %d\n", ++k, date, year);
        }
        else if (month == 9) {
            printf ("Case %d: %d, Poush, %d\n", ++k, date, year);
        }
        else if (month == 10) {
            printf ("Case %d: %d, Magh, %d\n", ++k, date, year);
        }
        else if (month == 11) {
            printf ("Case %d: %d, Falgun, %d\n", ++k, date, year);
        }
        else if (month == 12) {
            printf ("Case %d: %d, Chaitra, %d\n", ++k, date, year);
        }

    }
    return 0;
}
