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

#define b begin()
#define e end()
#define pb push_back

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

int hsh[N];
int dp[N];

bool sortByLen(pair<string, int> &a, pair<string, int> &b){
	if(a.second > b.second)
		return false;
	else 
		return true;
}

void solve(){
	int t;
	cin >> t;
	vector<pair<string,int>> str_len;
	loop(i,0,t){
		int n;
		cin >> n;
		string str;
		cin >> str;
		str_len.push_back(make_pair(str,n));
	}
	sort(str_len.begin(), str_len.end(), sortByLen);

	loop(i,0,t) cout << str_len.first << endl;
	
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

