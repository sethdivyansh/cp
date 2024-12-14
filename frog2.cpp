#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e7+10;

int k = 0,n;

typedef long long ll;

int hsh[N];
int dp[N];

int func(int i){
	if(i == 0) return 0;
	if(dp[i] != -1) return dp[i];
	int cost = INT_MAX;
	for(int j = 1;j<=k;j++){
		if(i-j>=0)
			cost = min(cost, func(i-j) + abs(hsh[i] - hsh[i-j]));
	}
	return dp[i] = cost;
}

void solve(){

	cin >> n >> k;

	loop cin >> hsh[i];

	cout << func(n-1) << endl;
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




