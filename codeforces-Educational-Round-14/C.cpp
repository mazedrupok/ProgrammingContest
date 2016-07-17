#include <bits/stdc++.h>
using namespace std;
string remove_tail_zero (string s) {
    int test = 0, i = 0; string t = "";
    while (s[i] == '0') i++; //ignore leading zeros
    for (; s[i] != '.' && s[i]; i++) t += s[i];

    for (; s[i]; i++) {
        if (s[i] == '0' || s[i] == '.') { //ignore tailing zeros
            string tt = ""; tt += s[i]; i++;
            while (s[i] == '0' && s[i]) {
                tt += s[i];
                i++;
            }
            if (!s[i] ) break;
            if (s[i] != '0' && s[i]) {
                t += tt;
                t += s[i];
            }
            continue;
        }
        t += s[i];
    }
    return t;
}
int main () {
    string s;
    cin >> s;
    s = remove_tail_zero(s);
    //cout << s << endl;
    int pos = -1, po;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '.') {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        string t = "";
        po = s.length() - 1;
        t += s[0]; t += '.';
        for (int i = 1; s[i]; i++) t += s[i];
        t = remove_tail_zero(t);
        cout << t;
        if (po != 0) cout << "E" << po;
        cout << endl;
    }
    else {
        if (pos == 1) cout << s << endl;
        else if (pos == 0) {
            int test = 0; string t = "";
            for (int i = 1; s[i]; i++) {
                if (s[i] == '0' && test == 0) pos++;
                else if (test == 0) {
                    t += s[i]; t += '.'; test = 1;
                }
                else t += s[i];
            }
            t = remove_tail_zero(t);
            cout << t << "E-" << pos+1 << endl;
        }
        else {
            cout << s[0] << '.';
            for (int i = 1; s[i]; i++) {
                if (s[i] == '.') continue;
                cout << s[i];
            }
            cout << "E" << pos-1 << endl;
        }
    }
    return 0;
}
