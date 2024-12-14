#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e5+10;


typedef long long ll;

int dp[N];
int h[N];
int sum;

int recur(int i){
	if(!i) return i;
	int cost = INT_MAX;
	if(dp[i] != -1) return dp[i];

	cost = min(cost, recur(i-1) + abs(h[i]-h[i-1]));

	if(i > 1)
		cost = min(cost, recur(i-2) + abs(h[i] - h[i-2]));
	return dp[i] = cost;

}

void solve(){
	int n;
	cin >> n;
	loop cin >> h[i];
	cout << recur(n-1);
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		sum = 0;
		solve();
	}
}




