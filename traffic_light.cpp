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
#define revLoop(i,n,a) for(int i = n; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;



void solve(){
	int n;
	char c;
	cin >> n >> c;
	string s;
	cin >> s;

	s = s+s;
	int cnt = 0;
	int ans = 0;
	bool start = true;

	loop(i,0,2*n){
		if(s[i] == c && start){
			start = false; 
		}
		if(s[i] == 'g'){
			// cout << s[i] << " " << cnt << endl;
			ans = max(ans, cnt); //1
			cnt = 0;
			start = true;
		}
		else{
			if(start == false) {
				cnt++; //1
				// cout << s[i] << " " << cnt << endl;
			}
		}
	}
	// cout << endl;
	cout << ans << endl;
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

