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
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	map<int,int> m;

	for(int i = 1; i < n+1 ; i++){
		cin >> a[i];
		a[i] %= 3;
		m[a[i]]++;
		sum += a[i];
	}
	sum %= 3;

	if(sum==0) cout << 0 << endl;
	else if(sum == 1){
		if(m[1]){
			cout << 1 << endl;
		}
		else{
			cout << 2 << endl;
		}
	}
	else{
		if(m[2] || m[1]){
			cout << 1 << endl;
		}
		else {
			cout << 2 << endl;
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

