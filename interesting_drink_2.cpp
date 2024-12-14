#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(long long i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const long long M = 1e9+7;
const long long N = 1e6+10;


typedef long long ll;

long long hsh[N];
long long dp[N];

long long cnt[N];
void solve(){
	long long n;
	cin >> n;
	long long prices[n];
	for(long long i = 0; i < n; i++) cin >> prices[i];
	long long q;
	cin >> q;
	long long money[q];
	for(long long i = 0; i < q; i++) cin >> money[i];


	sort(prices,prices+n);
	for(long long i = 0; i<q;i++){
		long long lo = *lower_bound(prices,prices+n,money[i]);
		if(lo == money[i]){
			long long x = distance(prices, find(prices, prices + n, lo));
			cnt[i] += x+1;
		}
		else{
			long long x = distance(prices, find(prices, prices + n, lo));
			cnt[i] += x;
		}
		cout << cnt[i] << endl;
		
	}

}

int main(){
	Seth;
	long long t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}




