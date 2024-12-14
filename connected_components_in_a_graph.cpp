#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

// const int M = 1e9+7;
const int N = 1e4+10;
vector<int> g[N];
// int hsh[N];

vector<vector<int>> cc;
vector<int> currect_cc;

bool vis[N];

typedef long long ll;


void dfs(int vertex){

	vis[vertex] = true;
	currect_cc.push_back(vertex);

	for(int child: g[vertex]){
		if(vis[child]) continue;
		
		dfs(child);
	}
}


void solve(){
	int n, e;
	cin >> n >> e;

	for(int i = 0;i<e;i++){
		int v1 , v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		if(vis[i]) continue;
		currect_cc.clear();
		dfs(i);
		cc.push_back(currect_cc);
		cnt++;
	}
	cout << cc.size() << endl;
	for(auto c_cc : cc){
		for(int vertex: c_cc){
			cout << vertex << " ";
		}
		cout << endl;
	}

}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
}




