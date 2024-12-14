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


void solve(){
	int n;
	cin >> n;
	vector<int> a(n+1,0);
	loop(i,0,n){
		cin >> a[i];
	}

	ll ans = 0;
	ll sum = 0;

	int cnt = 0;
	bool flag = false;

	// if(a[n-1]  <= 0) cnt++;

	loop(i,0,n){
		if(!((a[i]&1 && !(a[i+1]&1)) || (a[i+1]&1 && !(a[i]&1)))){
			if(flag) ans = max(ans, sum+a[i]);
			flag = false;
			sum = 0;
		}
		else{
			flag = true;
			sum += a[i];
		}
		if(sum < 0) sum = 0;
		ans = max(ans,sum);
		ans = max(ans, a[i]+0ll);
		// cout << ans << " " << sum << " " << a[i] << endl;
		if(a[i]<=0) cnt++;
	}
	// cout << "n: " << cnt << endl;
	if(cnt == n){
		cout << *max_element(a.begin(),a.end()-1) << endl;
		return;
	}

	// if((a[n-1]&1 && !(a[n-2]&1)) || (a[n-1]&1 && !(a[n-2]&1))){
	// 	if(a[n-1] >= 0){
	// 		ans += a[n-1];
	// 	}
	// }
	// else{
	// 	if(a[n-1] > ans) ans = a[n-1];
	// }
	cout << ans << endl;
	// cout << a[n] << endl;
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

