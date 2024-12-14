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
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

int hsh[N];
int dp[N];


void solve(){
	string s;
	cin >> s;
	int size = s.size();
	int cnt = 0;
	string a = "", b = "";
	for(int i = 0; i < size; i++){
		a += s[i];
		for(int j = i+1; j<size; j++){
			b+=s[j];
			if(b[0] == '0') {
				cnt++;
				break;
			}
		}
		int num_a = stoi(a);
		int num_b = stoi(b);
		if(num_a < num_b && num_a > 0 && num_b > 0 && cnt == 0)
			break;
		b = "";
		cnt = 0;
	}
	cout << a << " " << b << endl;
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




