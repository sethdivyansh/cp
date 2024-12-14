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
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<int> city(n);
	unordered_map<int, int> cc;

	loop(i,0,n) cin >> city[i];

	cc[0] = city[1];

	loop(i,1,n-1){
		cc[i] = (city[i] - city[i-1]) < (city[i+1] - city[i]) ? city[i-1] : city[i+1];
	}
	cc[n-1] = city[n-2];

	int q;
	cin >> q;

	while(q--){
		ll cost = 0;
		int cur, tar;
		cin >> cur >> tar;
		cur--, tar--;

		if(cur < tar){
			loop(i,cur, tar){
				if(cc[i] == city[i+1]){
					cost++;
				}
				else{
					cost += city[i+1] - city[i];
				}
			}
		}
		else{
			for(int i = cur; i >= tar+1; i--){
				if(cc[i] == city[i-1]){
					cost++;
				}
				else{
					cost += city[i] - city[i-1];
				}
			}
		}
		cout << cost << endl;
	}
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

