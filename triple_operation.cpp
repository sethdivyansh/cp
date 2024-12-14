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
#define loop(i,a,n) for(long long i = a; i<n;i++)
#define revLoop(i,n,a) for(int i = n-1; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)
#define   rall(v) v.rbegin(), v.rend()
#define in(v) loop(i,0,n) cin >> v[i];

// #pragma GCC target("popcnt")

typedef long long ll;
typedef vector<int> vi;

const int M = 1e9+7;
const int N = 2e5+10;

int func(int x){
	int cnt = 0;
	while(x > 0){
		x /= 3;
		cnt++;
	}
	return cnt;
}

int pre[N];

void solve(){
	ll l, r;
	cin >> l >> r;

	cout << pre[r] - pre[l-1] + func(l) << endl;

}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;

	loop(i,1,N){
		pre[i] = pre[i-1] + func(i);
	}

	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

