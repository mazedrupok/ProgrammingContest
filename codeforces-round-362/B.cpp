#include <iostream>
using namespace std;
int main ()
{
    int po, test;
    string s;
    cin >> s;
    int len1 = 0, len2 = 0, i, j, pos;
    for (i = 0; s[i]; i++) {
        if (s[i] == '.') {pos = i; break;}
    }
    test = 0; int temp = 0;
    po = 0;
    for (i = 0; s[i]; i++) {
        if (s[i] == 'e') {temp = 1; continue;}
        if (s[i] == '-') {test = 1; continue;}
        if (temp == 1) po = po * 10 + (s[i] - '0');
    }
    if (test == 1) po *= -1;
    if (po >= 0) {
        test = 0;
        for (i = 0; s[i]; i++) {
            if (s[i] == '.' || s[i] == 'e') {
                if (s[i] == 'e') break;
                continue;
            }
            if ( i-1 == po + pos) {
                j = i;
                while (j <= '0' || j > '9') {if (s[j] > '0' && s[j] <= '9') break; if (s[j] == 'e' || !s[j] ) break; j++;}
                if (s[j] > '0' && s[j] <= '9')
                    cout << '.';
                else break;
            }
            cout << s[i];
        }
        while (i-1 < po+pos) {
            i++;
            cout << '0';
        }
        cout << endl;
    }
    else {
        po = pos + po;
        test = 0;
        while (po < 0) {
            if (test == 0) cout << "0."; test = 1;
            cout << '0';
            po++;
        }
        for (i = 0; s[i]; i++) {
            if (s[i] == 'e') break;
            if (s[i] == '.') continue;
            if ( i == po) cout << '.';
            cout << s[i];
        }
        cout << endl;
    }
}
