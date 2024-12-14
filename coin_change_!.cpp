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
int dp[N];

int func(int amount, vector<int>& coins){
	if(amount == 0) return 0;
	if(dp[amount] != -1) return dp[amount];

	int ans = INT_MAX;
	for(int coin: coins){
		if(amount - coin >= 0){
			ans = min(ans + 0LL, func(amount - coin)+1LL);
		}
	}
	return dp[amount] = ans;
}

int coinChange(vector<int>& coins, int amount) {
	memset(dp, -1, sizeof(dp));
	int ans = func(amount, coins);
	return ans == INT_MAX ? -1 : ans;
}

void solve(){
	
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		solve();
	}
}




