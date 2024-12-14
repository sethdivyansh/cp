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
int f = 0;

void solve(){
	string s;
	cin >> s;
	int cnt_0 = 0, cnt_1 = 0;
	f++;
	loop(i,0,s.size()){
		if(s[i] == '1') cnt_1++;
		else cnt_0++;
	}
	if(cnt_0 == cnt_1){
		cout << 0 << endl;
		return;
	}
	string t = "";
	loop(i,0,s.size()){

		if(s[i] == '1'){
			if(cnt_0){
				cnt_0--;
				t.push_back('0');
			}
			else{
				t.push_back(' ');
			}
		}
		else{
			if(cnt_1){
				cnt_1--;
				t.push_back('1');
			}
			else{
				t.push_back(' ');
			}
		}
	}

	int cnt = 0;
	loop(i,0,t.size()){
		if(t[i] == ' '){
			break;
		}
		cnt++;
	}
	cout << s.size()-cnt << endl;

	// cout << f << ": " << t << endl;
	// if(cnt_0 == 0 || cnt_1 == 0) {
	// 	cout << max(cnt_1, cnt_0) << endl;
	// 	return;
	// }
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




