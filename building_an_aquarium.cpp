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

vector<ll> coral;
ll w;

bool check(ll h){
	ll water = 0;
	ll n = coral.size();

	for(int i = 0; i < n; i++){
		if(h>coral[i]){
			water += h-coral[i];
			if(water < 0 || water > w) return water <= w;
		}
	}
	return water <= w;
}

void solve(){
	int n;
	cin >> n >> w;
	coral.resize(n);

	loop(i,0,n){
		cin >> coral[i];
	}
	ll sum = 1e11;
	ll r = w+sum+10, l = 0, h = 0;

	loop(i,0,70){
		h = (r-l)/2 + l;
		if(check(h)){
			l = h;
		}
		else{
			r = h;
		}
	}
	cout << h << endl;
	coral.clear();
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

