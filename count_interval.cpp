// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	     | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include  <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)
#define mp make_pair
#define  pb push_back

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

void solve(){
	int n, m;
	cin >> n >> m;

	vector<pair<int,int>> l_r;

	loop(i,0,n){
		int l, r;
		cin >> l >> r;
		l_r.pb(mk(l,r));
	}
	sort(l_r.begin(),l_r.end());

	vector<int> search;
	loop(i,0,m){
		int x;
		cin >> x;
		search.pb(x);
		int l = 0, r = x-1, mid = 0;
		while(l<r){
			mid = (r+l)/2;
			if(l_r[mid].first == )
		}
	}


}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

