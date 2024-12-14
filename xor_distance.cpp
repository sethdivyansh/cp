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
#define mp make_pair
#define  pb push_back
// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;


void solve(){
	ll a,b,r;
	cin >> a >> b >> r;

	
	if(a < b) swap(a,b);
	ll x = 0;
	bool flag = true;

	for(int i = 63; i >= 0; i--){
		int abit = ((a >> i) & 1);
		int bbit = ((b >> i) & 1);
		
		if(abit == 1 && bbit == 0){
			if(flag)
				flag = false;
			else{
				if((x | (1ll << i)) <= r) x |= (1ll << i);
			}
		}
	}
	ll ans = abs((a ^ x) - (b ^ x));
	cout << ans << endl;
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

