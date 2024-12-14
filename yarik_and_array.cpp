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
	vector<int> a(n);
	loop(i,0,n){
		cin >> a[i];
	}

	ll ans = 0;
	ll sum = 0;

	int cnt = 0;
	bool flag = false;

	loop(i,0,n){

		if(i > 0 && (a[i]&1 && !(a[i-1]&1)) || (a[i-1]&1 && !(a[i]&1)) && a[i]>=0){
			sum += a[i-1];
			flag = true;
		}
		else{
			if(flag) sum += a[i-1];
			ans = max(ans,sum);
			flag = false;
			sum = 0;
			if(a[i] < 0) cnt++;
		}
		ans = max(ans, sum);
	}
	if(a[n-1] > 0 && (a[n-1]&1 && !(a[n-2]&1)) || (a[n-2]&1 && !(a[n-1]&1))) ans += a[n-1];
	if(cnt == n){
		cout << *max_element(all(a)) << endl;
	}
	else{
		cout << ans << endl;
	}
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

