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
#define srt(x) sort(x.begin(), x.end())
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<int> mn;
	int smallest_of_all = M;

	loop(i,0,n){
		int m;
		cin >> m;
		vector<int> v(m);
		loop(i,0,m) cin >> v[i];

		int smallest = *min_element(all(v));
		smallest_of_all = min(smallest_of_all,smallest);
		v.erase(find(all(v), smallest));
		mn.pb(*min_element(all(v)));
	}
	
	cout << smallest_of_all + (ll) accumulate(all(mn), 0LL) - *min_element(all(mn)) << endl;
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

