// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	 | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include  <bits/stdc++.h>
using namespace std;

#define Divyansh (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = a; i<n;i++)
#define revLoop(i,n,a) for(int i = n-1; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)
#define   rall(v) v.rbegin(), v.rend()

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 5e5+10;

list<int> pos[N];

void solve(){ 
	int q;
	cin >> q;

	
	int n = 0;
	while(q--){
		int c;
		cin >> c;
		

		if(c == 1){
			int x;
			cin >> x;

			pos[x].pb(n);
			n++;
		}
		else{
			int x, y;
			cin >> x >> y;

			if(x != y){
				pos[y].splice(pos[y].end(), pos[x]);
			}
		}
	}

	vector<int> ans(n);
	
	for (int i = 0; i < N; i++) {
		for (auto v : pos[i]) ans[v] = i;
	}

    for (int &x : ans) cout << x << " ";
	
}

int main(){
	Divyansh;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

