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
const int N = 2e5+10;


void solve(){
	int n;
	cin >> n;

	vector<int> v(n);
	int cnt1 = 0, cnt2 = 0;

	loop(i,0,n){
		cin >> v[i];
		if(v[i] == 1) cnt1++;
		if(cnt1 == 3){
			// v.erase(remove(v.begin(), v.end(), 1), v.end());
			replace(all(v), 1, 0);
			v.pb(3);
			cnt1 = 0;
		}
		if(v[i] == 2) cnt2++;
	}
	sort(all(v));

	if(cnt1 == 0){
		// do nothing
	}
	else if(cnt1 == 1){
		if(cnt2){
			// v.erase(remove(all(v), 1), v.end());
			replace(all(v), 1, 0);
			v.pb(3);
			auto it = lower_bound(all(v),2);
			v.erase(it);
		}
		else{
			auto it = upper_bound(all(v), 1);
			if(it != v.end()) (*it)++;
		}
	}
	else{
		if(cnt2 == 0){
			// v.erase(remove(all(v), 1), v.end());
			replace(all(v), 1, 0);
			v.pb(2);
		}
		else if(cnt2 == 1){
			// v.erase(remove(all(v), 2), v.end());
			replace(all(v), 2, 0);
			v.pb(3);
			auto it = upper_bound(all(v), 1);
			if(it != v.end()) (*it)++;
		}
		else{
			v.pb(3);
			v.pb(3);
			auto it = lower_bound(all(v), 2);
			v.erase(it);
			v.erase(it);
		}
	}
	ll ans = 1;

	sort(all(v));
	auto it = upper_bound(all(v), 0);

	for(;it != v.end();++it){
		if(*it != 0){
			ans = ans * 1ll * (*it) % M;
		}
	}
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

