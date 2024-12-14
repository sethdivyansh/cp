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

void solve(){
	unordered_map<string, int> subStr_cnt;
	vector<int> char_cnt(200,0);
	int n;
	cin >> n;
	string str;
	cin >> str;
	vector<bool> continuous(200,0);

	loop(i,0,n-1){
		string s = "";
		s.push_back(str[i]);
		s.push_back(str[i+1]);
		if(str[i] == str[i+1]){
			char_cnt[str[i]]++;
			if(i+2 < n)
			if(str[i+1] == str[i+2]){
				continuous[str[i]] = true;
			}
		}
		subStr_cnt[s] = 0;
	}
	// cout << char_cnt[str[0]] << endl;
	loop(i,0,n-1){
		string s = "";
		s.push_back(str[i]);
		s.push_back(str[i+1]);
		subStr_cnt[s]++;
		// cout << subStr_cnt[s] << endl;
		if(subStr_cnt[s] == 2){
			if(s[0] == s[1]){
				// cout << endl << char_cnt[str[i]] << endl;
				if(continuous[s[0]])
				if(char_cnt[str[i]] == 2)
					continue;
			}
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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

