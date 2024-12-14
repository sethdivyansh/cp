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

vector<ll> s;
ll c,n;
bool check(ll w){
	ll area = 0;
	loop(i,0,n){
		area += (s[i]+2*w) * (s[i]+2*w);
		if(area > c) return false;
	}
	return area <= c;
}

void solve(){
	cin >> n >> c;
	s.resize(n);

	loop(i,0,n) cin >> s[i];

	ll l = 1, r = 1e9;
	ll mid = 0;

	loop(i,0,75){
		mid = (r+l)/2;
		if(check(mid)){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	cout << mid << endl;
	s.clear();
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

