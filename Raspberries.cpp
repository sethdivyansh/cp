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
#define srt(x) sort(x.begin(), x.end())
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

void solve(){
	int n, k;
	cin >> n >> k;
	int ans = INT_MAX;
	int cnt_even = 0;
	bool flag = false;
	bool flag2 = false;

	loop(i,0,n){
		int x;
		cin >> x;
		if(k != 4){
			x %= k;
			if(x != 0)
				ans = min(ans,k-x);
			else ans = 0;
		}
		else{
			if(x%2 == 0) cnt_even++;
			if(x%4 == 0) flag = true;
			if((x+1)%4 == 0) flag2 = true; 
		}
	}
	if(k != 4) cout << ans << endl;
	else if(cnt_even >= 2 || flag) cout << 0 << endl;
	else if(flag2) cout << 1 << endl;
	else if(cnt_even == 0) cout << 2 << endl;
	else cout << 1 << endl;
	
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

