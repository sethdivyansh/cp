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
ll sum[N];

void solve(){
	ll n, k, x;
	cin >> n >> k >> x;
	ll min_sum = 0, max_sum = 0;

	loop(i,1,k+1){
		min_sum+=i;
	}
	revLoop(i,n,n-k){
		max_sum += i;
	}
	if(min_sum <= x && max_sum >= x) cout << "YES" << endl;
	else cout << "NO" << endl;
	// cout << min_sum << " " << max_sum << " " << n << " " << k<< endl;
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

