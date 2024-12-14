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
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

int hsh[N];
int dp[N];


void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i : a){
		cin >> i;
	}
	bool found = false;

	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		int lo = i + 1, hi = n - 1;
		while(lo<hi){
			int current = a[i] + a[lo] + a[hi];
			string s = to_string(current);
			int len = s.size();
			if(len == 3){
				found = true;
			}
			if(len < 3){
				lo++;
			}
			else hi--;
		}
	}
	if(found) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}




