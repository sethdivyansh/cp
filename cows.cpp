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
#define mp make_pair
#define  pb push_back
#define srt(x) sort(x.begin(), x.end())

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

int n, cows;
int positions[N];

bool canPlaceCows(int minDist){
	int lastPos = -1;
	int cows_cnt = cows;

	for(int i = 0; i < n; i++){
		if(positions[i] - lastPos >= minDist || lastPos == -1){
			cows_cnt--;
			lastPos = positions[i];
		}
		if(!cows_cnt) break;
	}
	return !cows_cnt;
}

void solve(){
	cin >> n >> cows;
	loop(i,0,n){
		cin >> positions[i];
	}

	int lo = 0, hi = 1e9, mid;

	while(hi-lo > 1){
		int mid = (hi+lo)/2;
		if(canPlaceCows(mid)){
			lo = mid;
		}
		else hi = mid-1;
	}
	if(canPlaceCows(hi)) cout << hi << endl;
	else cout << lo << endl;
}

int main(){
	Divyansh;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

