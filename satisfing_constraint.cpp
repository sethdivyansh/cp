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

vector<int> v;

int l, r;
int cnt;

void solve(){
	int n;
	cin >> n;
	while(n--){
		int a, x;
		cin >> a >> x;
		
		switch(a){
		case 1:
			l = max(l,x);
			break;
		case 2:
			r = min(r,x);
			break;
		case 3:
			v.push_back(x);
			break;
		}
	}
	// cout << l << " " << r << endl;
	for(int x: v){
		if(l <= x && x <= r){
			cnt++;
			// cout << x << endl;
		}
		
	}
	// cout << endl;
	cout << max(0, r - l + 1 - cnt) << endl;
	
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		l = 1, r = 1e9;
		cnt = 0;
		v.clear();
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}




