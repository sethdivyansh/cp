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
#define revLoop(i,n,a) for(int i = n; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n, k, a, b;
	cin >> n >> k >> a >> b;
	a--,b--;

	vector<pair<int, int>> city(n);

	loop(i,0,n){
		cin >> city[i].first >> city[i].second;
	}

	ll ans = abs(city[a].first-city[b].first)+0ll+abs(city[a].second-city[b].second);

	if(a < k && b < k){
		cout << 0 << endl;
		return;
	}

	ll temp_ans_x = 1e18;
	ll temp_ans_y = 1e18;

	if(a < k) temp_ans_x = 0;
	else
	loop(i,0,k){
		if(a == i) continue;
		ll ansx = abs(city[a].first-city[i].first)+0ll+abs(city[a].second-city[i].second);
		temp_ans_x = min(temp_ans_x, ansx);
	}
	
	if(b < k) temp_ans_y = 0;
	else
	loop(i,0,k){
		if(b == i) continue;
		ll ansy = abs(city[b].first-city[i].first)+0ll+abs(city[b].second-city[i].second);
		temp_ans_y = min(temp_ans_y, ansy);
	}
	

	ans = min(ans, temp_ans_x+temp_ans_y);
	cout << ans << endl;
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}







