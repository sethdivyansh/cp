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
#define pb push_back
#define mp make_pair
// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

bool sortWithCond(pair<string,int> &a, pair<string,int> &b){
	int i = 0;
	while(true){
		if(a.first[i] == b.first[i]){
			i++;
		}
		else{
			if(i&1){
				return a.first > b.first;
			}
			else{
				return a.first < b.first;
			}
		}
	}
}

void solve(){
	int n, m;
	cin >> n >> m;
	vector<pair<string,int>> str_ind;

	loop(i,0,n){
		string str;
		cin >> str;
		str_ind.pb(mp(str,i+1));
	}


	sort(str_ind.begin(), str_ind.end(), sortWithCond);

	for(auto ans: str_ind){
		cout << ans.second << " ";
	}
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

