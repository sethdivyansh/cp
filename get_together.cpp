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
#define loop(i,a,n) for(int i = 0; i<n;i++)
#define mp make_pair
#define  pb push_back
// #pragma GCC target("popcnt")

const int M = 1e9+7;
// const int N = 2e5+10;


typedef long long ll;

int n;
vector<double> x, v;

bool good(double time){
	double maxf = INT_MIN, mine = INT_MAX;
	loop(i,0,n){
		double left = x[i] - v[i] * time;
		double right = x[i] + v[i] * time;

		maxf = max(maxf, left);
		mine = min(mine, right);
	}
	return mine - maxf >= 0;
}

void solve(){
	cin >> n;
	x.resize(n);
	v.resize(n);
	loop(i,0,n) cin >> x[i] >> v[i];

	double l = 0, r = 2e9;

	loop(i,0,100){
		double mid = (l+r)/2;
		if(good(mid))
			r = mid;
		else l = mid;
	}
	cout << fixed << setprecision(15) << r << endl;
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

