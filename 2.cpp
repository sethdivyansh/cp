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
#define mp make_pair
#define  pb push_back
#define srt(x) sort(x.begin(), x.end())

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

vector<ll> diff;
vector<ll> a;

void solve(){
	int n, k;
	cin >> n >> k;
	

	loop(i,0,n){
		ll x;
		cin >> x;
		a.pb(x);
	}
	if(k >= 3){
		cout << 0 << endl;
		return;
	}

	srt(a);
	ll ans = a[0];

	loop(i,0,n-1){
		ll d = a[i+1] - a[i];
		ans = min(ans,d);
	}

	if(k == 1){
		cout << ans << endl;
		return;
	}

	loop(i,0,n){
		loop(j,i+1,n){
			int l = -1, r = n, mid;
			while(r-l > 1){
				mid = (l+r)/2;
				if(a[mid] <= a[j] - a[i])
					l = mid;
				else
					r = mid;
			}
			if(l>-1){
	 			ans=min(ans,abs(a[i]-a[j])-a[l]);
	 		}
	 		if(r<n){
	 			ans=min(ans,a[r]-a[j]+a[i]);
	 		}
			// ans = min(ans, min(abs(a[i] - a[j] - a[l]),abs(a[i] - a[j] - a[r])));
		}
	}
	cout << ans << endl;
	// srt(diff);
	// cout << endl;

	// loop(i,0,n){
	// 	loop(j,0,diff.size()){
	// 		ll d = abs(a[i]-diff[j]);
	// 		mn = min(mn, d);
	// 	}
	// }
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		a.clear(), diff.clear();
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

