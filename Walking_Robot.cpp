// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	     | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

int hsh[N];
int dp[N];

int a, b, maxa;

void use_battery(int s)
{
	if(s == 1) a = min(a + 1, maxa);
	--b;	
}

void use_accum()
{
	--a;
}


void solve(){
	int ans = 0;
	int n;
	cin >> n >> b >> a;
	maxa = a;
	vector<int> s(n);
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < n; i++)
	{
		if(a == 0 && b == 0)
			break;
		else if(a == 0)
			use_battery(s[i]);
		else if(b == 0)
			use_accum();
		else if(s[i] == 1 && a < maxa)
			use_battery(s[i]);
		else use_accum();
		ans++;
	}
	cout << ans << endl;
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}




