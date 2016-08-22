#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
#define LL long long
int n;
string s;
vector <int> G[100001];
int main()
{
	cin >> n; cin >> s;
	for(int i = 0; i < s.size(); ++i)
		G[s[i]].push_back(i);
	int mnn = n;
	for(int i = 0; i < n; ++i) {
		int mxx = 0;
		bool test = 1;
		for(int j = 'a'; j <= 'z'; ++j) {
			if(G[j].size() == 0) continue;
			vector<int> & v = G[j];
			vector<int>::iterator it = lower_bound(v.begin(), v.end(), i);
			if(it == v.end()) {
				test = 0; break;
			}
			int len = *it;
			mxx = max(mxx, len - i + 1);
		}
		if(!test) break;

		for(int j = 'A'; j <= 'Z'; ++j) {
			if(G[j].size() == 0) continue;
			vector<int> & v = G[j];
			vector<int>::iterator it = lower_bound(v.begin(), v.end(), i);
			if(it == v.end()) {
				test = 0; break;
			}
			int len = *it;
			mxx = max(mxx, len - i + 1);
		}
		if(test) mnn = min(mnn, mxx);
	}
	cout << mnn << endl;

	return 0;
}
