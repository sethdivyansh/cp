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
#define revLoop(i,n,a) for(ll i = n; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<ll>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;



void solve(){
	ll n;
	cin >> n;

	vector<ll> a(n),b(n);

	unordered_map<ll,ll> cnt1,cnt2;
	unordered_set<ll> s1,s2;

	loop(i,0,n){
		cin >> a[i];
	}

	loop(i,0,n){
		cin >> b[i];
	}

	ll r = 1;
	loop(i,0,n){
		if(i+1 != n && a[i] == a[i+1]){
			r++;
		}
		else{
			r = 1;
		}
		cnt1[a[i]] = max(cnt1[a[i]], r);
		s1.insert(a[i]);
	}
	r = 1;
	loop(i,0,n){
		if(i+1 != n && b[i] == b[i+1]){
			r++;
		}
		else{
			r = 1;
		}
		cnt2[b[i]] = max(cnt2[b[i]], r);
		s2.insert(b[i]);
	}

	ll ans = 0;


	for(auto num: s1){
		ans = max(ans,cnt1[num]+cnt2[num]);
	}
	for(auto num : s2){
		ans = max(ans, cnt1[num] + cnt2[num]);
	}
	cout << ans << endl;

}

int main(){
	Divyansh;
	ll t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

