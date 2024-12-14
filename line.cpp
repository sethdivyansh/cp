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

bool sortWithCond(tuple<ll,ll, int> &a, tuple<ll,ll, int> &b){
	return(get<1>(a) - get<0>(a) > get<1>(b) - get<0>(b));
	
}

void solve(){
	int n;
	cin >> n;
	vector<tuple<ll, ll, int>> view_canView_index;
	string s;
	cin >> s;
	ll sum = 0;
	map<int, ll> index_view;

	loop(i,0,n){
		if(s[i] == 'L'){
			view_canView_index.push_back(make_tuple(i,n-i-1,i));
			index_view[i] = i;
			sum += i;
		}
		else{
			view_canView_index.push_back(make_tuple(n-i-1,i,i));
			sum += n-i-1;
			index_view[i] = n-i-1;
		}
	}
	sort(view_canView_index.begin(), view_canView_index.end(), sortWithCond);
	
	ll mx = sum;
	for(int i = 0; i < n; i++){
		// sum += get<1>(view_canView_index[i]) < index_view[get<2>(view_canView_index[i])] ? 0 : (get<1>(view_canView_index[i]) - index_view[get<2>(view_canView_index[i])]);
		sum += get<1>(view_canView_index[i]);
		sum -= index_view[get<2>(view_canView_index[i])];
	 	mx = max(sum, mx);
		cout << mx << " ";
	}

	// for(auto i: view_canView_index){
	// 	cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << endl;
	// }
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

