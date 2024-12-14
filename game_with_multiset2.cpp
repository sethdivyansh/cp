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

int b = 0;

typedef long long ll;

int hsh[N];
int dp[N];

vector<ll> nums;
ll sum = 0;
int cnt = 1;
bool isReturn = false;

void solve(){
	cnt++;
	int t, v;
	cin >> t >> v;
	if(t == 1){
		nums.push_back(1<<v);
		sum += (1<<v);
	}
	int sum2 = sum;
	bool notFound = true;
	// if(cnt == 49) {
	// 	cout << v << endl;
	// 	isReturn = true;
	// 	return;
	// }
	if(t == 2){
		if(v == 0){
			cout << "YES : " << v << " Line: " << cnt << "\n";
			return;
		}
		sort(nums.begin(), nums.end());
		int l = 0, r = nums.size()-1;
		while(l<=r){
			if(sum == v){
				cout << "YES : " << v << " Line: " << cnt << "\n";
				notFound = false;
				break;
			}
			if(sum > v){
				sum -= nums[r];
				if(r>0)
				r--;
			}
			if(sum < v){
				if(r+1<nums.size()-1)
				r++;
				sum += nums[r];
				sum -= nums[l];
				l++; 
			}
		}
		if(notFound && v != 0){
			// cout << sum << endl;
			cout << "NO : " << v << " Line: " << cnt << "\n";
		}
		sum = sum2;
	}
	if(t == 3) b++;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		if(b || isReturn) return 0;
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}
