#include<bits/stdc++.h>
using namespace std;
int wt[105], val[105];
long long dp[105][100005];

long long func(int index, int val_left){
	if(val_left == 0) return 0;
	if(index < 0) return 1e15;
	if(dp[index][val_left] != -1) return dp[index][val_left];

	long long ans = func(index-1, val_left);
	if(val_left - val[index] >= 0)
		ans = min(ans, func(index - 1, val_left - val[index]) + wt[index]);
	return dp[index][val_left] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n, w;
	cin >> n >> w;
	for(int i = 0; i < n; i++){
		cin >> wt[i] >> val[i];
	}
	int max_val = 1e5;
	for(int i = max_val-1; i >= 0; i--){
		if(func(n-1, i) <= w){
			cout << i << endl;
			break;
		}
	}
}