#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e5+10;
int cnt = 0;

typedef long long ll;

set <int> v;
int hsh[N];
int dp[N];

int l, r, y;

void solve(){
	int n, a , x;
	cin >> n;
	while(n--){
		cin >> a >> x;
		switch(a){
		case 1:
			if(x >= l)
			l = x;
			break;
		case 2:
			if(x <= r)
			r = x;
			break;
		case 3:
			if(x == l && x == r){
				cout << 0 << endl;
				y++;
				break;
			}
			else if(x == l) l++;
			else if(x == r) r--;
			else if((x > l && x < r) || (x < r && x > l)) v.insert(x);
		}
	}
	cnt = v.size();
	for(int a: v){
		if((l < a && a < r)) cnt--;
	}
	if(r >= l && !y)
		cout << r-l+1-cnt << endl;
	else if(!y) cout << 0 << endl;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		l = 1, r = 1e9;
		cnt = 0;
		y = 0;
		solve();
	}
}




