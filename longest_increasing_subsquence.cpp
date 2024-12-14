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

int lis(int i){
	if(dp[i] != -1) return dp[i];
	int ans = 1;
	for(int j = 0; j < i; j++){
		if(hsh[i] > hsh[j]){
			ans = max(ans, lis(j) + 1);
		}
	}
	return dp[i] = ans;
}

void solve(){
	int n;
	cin >> n;
	loop cin >> hsh[i];
	int ans = 0;
	loop ans = max(ans, lis(i));
	cout << ans << endl;
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




