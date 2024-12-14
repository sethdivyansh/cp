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
	int n;
	cin >> n;
	vector<pair<int,int>> a;
	loop(i,0,n){
		int x;
		cin >> x;
		a.pb(mp(x,i+1));
	}

	sort(a.begin(), a.end());
	int i = 0, j = i+1;
	int ans = 0;

	for(i = 0; i < n - 1; i++){
		for(j = i+1; j < n; j++){
			if(a[i].first * 1LL * a[j].first > 2 * n) break;
			if(a[i].first * 1LL * a[j].first == a[i].second + a[j].second)
				ans++;
		}
	}
	cout << ans << endl;
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

