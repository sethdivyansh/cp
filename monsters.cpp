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

int hsh[N];
int dp[N];

bool sortInDesc(pair<int, int> &a, pair<int, int> &b){
	if (a.first != b.first) return (a.first > b.first);
    else return (a.second < b.second);
}

void solve(){
	int n, k;
	cin >> n >> k;
	int mons[n];
	vector<pair<int,int>> val_ind;

	loop(i,0,n){
		int x;
		cin >> x;
		if(x <= k){
			mons[i] = x;
		}
		else{
			mons[i] = (x%k == 0 ? k : x%k);
		}
		val_ind.push_back(make_pair(mons[i], i+1));
	}
	sort(val_ind.begin(), val_ind.end(), sortInDesc);

	for(auto ans : val_ind){
		cout << ans.second << " ";
	}
	cout << endl;

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




