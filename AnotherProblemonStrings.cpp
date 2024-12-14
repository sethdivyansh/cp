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
const int N = 1e6;

vector<int> hsh(N, 0);
vector<int> cnt(N, 0);
void solve(){
	int k;
	cin >> k;

	string s;
	cin >> s;

	loop(i,0,s.size()){
		if(s[i] == 1){
			hsh[i]++;
		}
		if(i > 0)
			hsh[i] += hsh[i-1];
		cnt[hsh[i]]++;
	}

	if(cnt[k] == 0){
		cout << 0 << endl;
		return;
	}

	int r = k, l = k;
	ll ans = 0;

	while(true){
		
	}
	cout << ans << endl;
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

