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

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)
#define mp make_pair
#define  pb push_back

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<int> h;
	loop(i,0,n){
		int x;
		cin >> x;
		h.pb(x);
	}
	int l = 0, r = n-1;
	ll water = 0;

	int lmax = h[l], rmax = h[r];

	while(l<r){
		if(lmax < rmax){
			l++;
			lmax = max(h[l], lmax);
			water += lmax - h[l];
		}
		else{
			r--;
			rmax = max(h[r], rmax);
			water += rmax - h[r];
		}
	}
	cout << water << endl;
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

