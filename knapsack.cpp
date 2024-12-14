#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e5+10;


typedef long long ll;

int hsh[N];
long long int dp[105][100005];
int wt[105], val[105];

long long int func(int ind, int wt_left){
	if(wt_left == 0) return 0;
	if(ind < 0) return 0;
	if(dp[ind][wt_left] != -1) return dp[ind][wt_left];
	long long int ans = func(ind - 1, wt_left); // Dont choose item at index.
	
	if(wt_left - wt[ind] >= 0)
		ans = max(ans + 0LL, func(ind - 1, wt_left - wt[ind]) + 0LL + val[ind]); // choose item at index.
	return dp[ind][wt_left] = ans;
}

void solve(){
	int n, w;
	cin >> n >> w;

	loop cin >> wt[i] >> val[i];

	long long int ans = func(n-1, w);
	cout << ans << endl;
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		solve();
	}
}




