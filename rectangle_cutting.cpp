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
#define srt(x) sort(x.begin(), x.end())
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

void solve(){
	int a, b;
	cin >> a >> b;

	if (a&1 && b&1){
		cout << "NO" << endl;
		return;
	}

	if(a%2 == 0 && b%2 == 0) {
		cout << "YES" << endl;
		return;
	}

	// int c = (a%2==0) ? a/2 : b/2;

	// if(c&1 && c != 1){
	// 	cout << "NO" << endl;
	// 	return;
	// }
	// cout << "YES" << endl;

	if(!(a&1)){
		a/=2;
		if(a == b){
			cout << "NO" << endl;
			return;
		}
	}
	else{
		b/=2;
		if(a == b) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
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

