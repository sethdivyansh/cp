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
#define revLoop(i,n,a) for(int i = n; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n, x, y;
	cin >> n >> x >> y;

	ll add = 0, sub = 0;
	ll lcm = x * 1ll * y / __gcd(x,y);
	ll n2 = n;
	for(int i = x; i <= n2; i += x){
		if(n <= 0) break;
		if(i % lcm == 0) continue;
		// cout << n << endl;
		add += n;
		n--;
	}
	// cout << endl;
	// cout << add << endl;
	int num = 1;
	for(int i = y; i <= n2; i += y){
		if(num > n2) break;
		if(i % lcm == 0) continue;
		sub += num;
		num++;
	}
	// cout << sub << endl;
	cout << add << " " << sub << endl;
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

