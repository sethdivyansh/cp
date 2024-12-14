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
const int N = 2e5+10;


int f(int i, int j , string &s, string &t, vector<vector<int>> &dp){
	if( i == 0 || j == 0) return 0;

	if(dp[i][j] != -1) return dp[i][j];

	if(s[i-1] == t[j-1]) return dp[i][j] = 1 + f(i-1, j-1, s, t, dp);

	return dp[i][j] = max(f(i-1, j, s, t, dp), f(i, j-1, s, t, dp));
}

int lcs(string s, string t){
	int n = s.size();
	int m = t.size();

	vector<vector<int>> dp(n+1, vector<int> (m+1,-1));


	
	return f(n-1, m-1, s, t, dp);
}

void solve(){

}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

