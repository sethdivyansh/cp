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

bool flag = false;

bool check(int n){
	string snum = to_string(n);
	int len = snum.size();

	loop(i,0,len){
		if(snum[i] != '0' && snum[i] != '1') {
			return false;
		}
	}
	return true;
}

void check2(int n){
	if(n == 1) return;
	int sn2 = 0;
	loop(i,2,n+1){
		ll sn = stoll((bitset<8> (i)).to_string());
		if(sn * 1ll * sn > n) break;

		if(n%sn == 0)
			sn2 = n / sn;
		else continue;
		if(check(sn2)){
			flag = true;
			return;
 		}
 		else{
 			check2(sn2);
 		}
 		// cout << sn2 << endl;
	}
}

void solve(){
	int n;
	cin >> n;
	if(check(n)){
		cout << "YES" << endl;
		return;
	}
	check2(n);
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;

	flag = false;
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
