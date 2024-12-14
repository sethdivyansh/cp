// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	     | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;



void solve(){
	int n, m;
	cin >> n >> m;
	
	int cnt = 0;

	if(m <= n){
		cout << (n-m) << endl;
		return;
	}
	else{
		if(m&1){
			m++;
			cnt++;
		}
		while(n != m){
			m /= 2;
			cnt++;
			if(n == m) break;

			if(m&1){
				m++;
				cnt++;
			}
			if(m <= n){
				cout << (n-m + cnt) << endl
				return;
			}
		}
	}
	cout << cnt << endl;
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
