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

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

ll fact[N];

void fac(){
	fact[0] = 0;
	fact[1] = 1;

	loop(i,2,N){
		fact[i] = fact[i-1] * i;
	}
}

void solve(){
	int n, k, q;
	cin >> n >> k >> q;
	int ans = 0;
	int cnt = 0;
	int x;
	vector<int> v;
	loop(i,0,n){
		cin >> x;
		if(x <= q) cnt++;
		else {
			if(cnt >= k) ans += fact[cnt];
			cnt = 0;
		}
	}
	
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	fac();
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

