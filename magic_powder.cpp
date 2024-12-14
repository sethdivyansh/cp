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
#define loop(i,a,n) for(ll i = a; i<n;i++)
#define mp make_pair
#define  pb push_back
#define srt(x) sort(x.begin(), x.end())

// #pragma GCC target("popcnt")

const    int M = 1e9+7;
const    int N = 2e5+10;

typedef long long ll;

ll n,k;
vector<ll> req, have;

bool check(ll mid){
	ll res = 0;
	ll p = k;
	loop(i,0,n){
		if(req[i] * mid > have[i]) p -= req[i] * mid - have[i];
		if(p < 0) return false;
	}
	return true;
}

void solve(){
	cin >> n >> k;
	req.resize(n);
	have.resize(n);
	loop(i,0,n) cin >> req[i];
	loop(i,0,n) cin >> have[i];

	ll lo = 0, hi = 2e9;
    ll ans = 0;

	while(lo <= hi){
		ll mid = (lo + hi)/2;
		if(check(mid)){
			lo = mid + 1;
			ans = mid;
		}
		else{
			hi = mid - 1;
		}
	}
	cout << ans << endl;
}
int main(){
	Divyansh;
    ll t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

