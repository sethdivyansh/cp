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
#define revLoop(i,n,a) for(int i = n-1; i >= a; i--)
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



int lcs(string s, string t){
	int n = s.size();
	int m = t.size();

	vector<int> prev(m+1, 0), cur(n+1, 0);

	for(int j = 0; j <= m; j++) prev[j] = 0;

	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){

			if(s[i-1] == t[j-1])  cur[j] = 1 + prev[j-1];
			else cur[j] = max(prev[j], cur[j-1]);
			
		}
		prev = cur;
	}

	return prev[m];
}

void solve(){

}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

