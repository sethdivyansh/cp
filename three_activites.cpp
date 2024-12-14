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
#define srtD(x) sort(x.begin(), x.end(), greater<pair<int,int>>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n;
	cin >> n;

	vector<pair<int,int>> a(n), b(n), c(n);
	vector<int> a2(n), b2(n), c2(n);

	loop(i,0,n) {
		cin >> a[i].first;
		a[i].second = i;
		a2[i] = a[i].first;
	}
	loop(i,0,n) {
		cin >> b[i].first;
		b[i].second = i;
		b2[i] = b[i].first;
	}
	loop(i,0,n) {
		cin >> c[i].first;
		c[i].second = i;
		c2[i] = c[i].first;
	}

	srtD(a);
	srtD(b);
	srtD(c);

	auto max_a3 = {a[0].second,a[1].second,a[2].second};
	auto max_b3 = {b[0].second,b[1].second,b[2].second};
	auto max_c3 = {c[0].second,c[1].second,c[2].second};

	int ans = -1;

	for(int x: max_a3){
		for(int y : max_b3){
			for(int z: max_c3){
				if(x != y && y != z && z != x){
					ans = max(ans, a2[x]+b2[y]+c2[z]);
				}
			}
		}
	}
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

