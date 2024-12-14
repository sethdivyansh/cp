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
#define srt(x) sort(x.begin(), x.end())
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

void solve(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	bool typeable[26] = {0};

	loop(i,0,k){
		char c;
		cin >> c;
		typeable[c-'a'] = true;
	}
	bool a[n];

	loop(i,0,n){
		if(typeable[s[i] - 'a']){
			a[i] = 1;
		}
		else a[i] = 0;
	}
	ll f[n+1];
	ll ans = 0;

	f[0] = 0;

	loop(i,0,n){
		if(!a[i]){
			f[i+1] = 0;
		}
		else {
			f[i+1] = f[i] + 1; 
		}
		ans += f[i+1];
	}
	cout << ans;

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

