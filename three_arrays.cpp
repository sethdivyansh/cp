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


void solve(){
	int n;
	cin >> n;

	vector<int> a(n), b(n), c(n);

	loop(i,0,n) cin >> a[i];
	loop(i,0,n) cin >> b[i];
	loop(i,0,n) cin >> c[i];

	srtD(c);
	vector<ll> sum(n);


	ll ans = LLONG_MAX;
	do{
		ll sm = 0;
		loop(i,0,n){
			sm += a[i] * b[i];
		}
		loop(i,0,n){
			sum[i] = a[i] + b[i];
		}
		sort(all(sum));
		loop(i,0,n){
			sm += c[i]*sum[i];
		}
		ans = min(ans, sm);
	}while(next_permutation(all(b)));
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

