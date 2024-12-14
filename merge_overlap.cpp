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

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

void solve(){
	int n;
	cin >> n;

	vector<pair<int,int>> l_r(n);
	
	loop(i,0,n){
		cin >> l_r[i].first >> l_r[i].second;
	}

	sort(l_r.begin(), l_r.end());

	int index = 0;

	vector<pair<int,int>> ans_vec(n,{0,0});
	ans_vec[0] = (make_pair(l_r[0].first, l_r[0].second));

	loop(i,0,n-1){
		if(l_r[i+1].first <= ans_vec[index].second){
			ans_vec[index].first = min(l_r[i].first, ans_vec[index].first);
			ans_vec[index].second = max(l_r[i+1].second, ans_vec[index].second);
 		}
 		else {
 			index++;
 			ans_vec[index].first = l_r[i+1].first;
			ans_vec[index].second = l_r[i+1].second;
 		}
	}
	for(int i = n; i>=index;i--){
		ans_vec.pop_back();
	}
	loop(i,0,index+1){
		if(i != 0 && ans_vec[i].first == 0 && ans_vec[i].second == 0)
			continue;
		cout << ans_vec[i].first << " " << ans_vec[i].second << endl;
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

