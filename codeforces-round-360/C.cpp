#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ("in.txt", "r", stdin);
    int n, m, a, b, e;
    while(cin >> n >> e){
        vector <int> G[n+1];
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        bool bipartite;
        queue <int> q;
        map <int, int> mp; //works as visited array

        for(int i = 1; i <= n; i++) {
            if(mp.count(i)) continue;
            mp[i] = 0;
            bipartite = true;
            q.push(i);
            while(!q.empty()) {
                int u = q.front(); q.pop();
                for(int j = 0; j < G[u].size(); j++){
                    int v = G[u][j];
                    if(!mp.count(v)){
                        mp[v] = 1-mp[u]; //if mp[u] is 0 then mp[v] = 1
                                         //if mp[u] is 1 then mp[v] = 0
                        q.push(v);
                    }
                    else if(mp[v] == mp[u]){
                       bipartite = false;
                    }
                }
                if (bipartite == false) break;
            }
            if(!bipartite) break;
        }
        if(!bipartite) {
            cout << "-1" << endl;
            continue;
        }
        vector <int> p, r;
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 1) p.push_back (i);
            else if (mp[i] == 0) r.push_back (i);
        }
        cout << p.size() << endl;
        for (int i = 0; i < p.size(); i++) cout << p[i] << " "; cout << endl;
        cout << r.size() << endl;
        for (int i = 0; i < r.size(); i++) cout << r[i] << " "; cout << endl;

    }
    return 0;
}
