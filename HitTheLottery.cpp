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
#define   rall(v) v.rbegin(), v.rend()

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n;
	cin >> n;

	ll cnt = 0;
	int x = 0;

	if(n >= 100){
		x = n/100;
		cnt += x;

		n -= x * 100;
	}

	if(n >= 20){
		x = n/20;
		cnt += x;

		n -= x * 20;
	}

	if(n >= 10){
		x = n/10;
		cnt += x;

		n -= x * 10;
	}

	if(n >= 5){
		x = n/5;
		cnt += x;

		n -= x * 5;
	}

	if(n>=1){
		x = n/1;
		cnt += x;

		n -= x;
	}

	cout << cnt << endl;
}

int main(){
	Divyansh;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

