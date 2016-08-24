#include <bits//stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int test = 0, test2 = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'a' && test == 1) break;
        if (s[i] != 'a') {
            s[i]--; test = 1;
        }
    }
    if (test == 0) {
        s[s.size() -1] = 'z';
    }
    cout << s;

}
