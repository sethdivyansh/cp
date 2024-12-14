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
	int n, d;
	cin >> n >> d;

	vector<int> players(n);

	loop(i,0,n) cin >> players[i];

	sort(all(players));

	int cnt = 0;
  	int m;
  	for(int i = n-1; i >= 0; i--){
	    m += d/players[i] + 1;
	    if(m>n) break;
	    cnt++;
  	}
    cout << cnt <<endl;
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

