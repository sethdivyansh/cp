// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	     | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)
#define b begin()
#define e end()
#define pb push_back
#define mp make_pair

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> l_r(n);

	loop(i,0,n){
		cin >> l_r[i].first >> l_r[i].second;
	}

	sort(l_r.begin(), l_r.end());

	int ind = 0;

	loop(i,0,n-1){
		if(l_r[i+1].first <= l_r[i].second){
			
			l_r[ind].first = l_r[i].first;

			int mx = max(l_r[i].second, l_r[i+1].second);
			l_r[ind].second = mx;
		}
		else{
			ind++;
		}
	}
	for(auto ans: l_r){
		cout << ans.first << " " << ans.second << endl;
	}
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

