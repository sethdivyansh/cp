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
#define   rall(v) v.rbegin(), v.rend()

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	string s1 = "";
	int check = 0;

	vector<int> div;

	for(int i = 1; i * i <= n; i++){
		if(n % i == 0){
			div.pb(i);
			div.pb(n/i);
		}
	}
	sort(all(div));


	for(int i : div){

		int start = 0;
		while(start < n){
			check = 0;
			s1 = "";
			for(int j = start; s1.size() < i; j++){
				s1 += s[j];
			}
			start += i;

			for(int j = 0; j < n; j++){
				if(s1[j % s1.size()] != s[j]){
					check++;
				}
				if(check > 1){
					break;
				}
			}
			if(check < 2){
				cout << i << endl;
				return;
			}
		}
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


	