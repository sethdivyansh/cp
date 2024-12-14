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

	vector<int> cnt(n);
	loop(i,0,n){
		int x;
		cin >> x;
		cnt[x]++;
	}
	
	if(cnt[0] == 0){
		cout << 1 << endl;
		return;
	}
	if(!cnt[1]){
		if(cnt[0] != n){
			cout << 2 << endl;
		}
		else cout << 1 << endl;
		return;
	}
	int mn = cnt[0];

	loop(i,0,n){
		mn = min(mn, cnt[i]+i);
	}
	int ans = mn;
	loop(i,0,n){
		if(i + cnt[i] > mn && cnt[i]){
			ans++;
			break;
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

