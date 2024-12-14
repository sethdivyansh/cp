
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

void solve(){

	string s;
	cin >> s;


	string t = s;
	reverse(all(t));

	int n = s.size();

	vector<vector<int>> dp(n+1, vector<int> (n+1,0));

	loop(i,0,n+1) {
		dp[0][i] = 0;
		dp[i][0] = 0;
	}

	loop(i,1,n+1){
		loop(j,1,n+1){

			if(s[i-1] == t[j-1])  dp[i][j] = 1 + dp[i-1][j-1];
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			
		}
	}

	cout << n - dp[n][n] << endl;
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

