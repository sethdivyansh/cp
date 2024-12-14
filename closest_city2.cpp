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
	vector<ll> costFw(n,0);
	vector<ll> costBw(n,0);
	
	loop(i,0,n) cin >> city[i];

	unordered_map<int, int> cc;
	cc[0] = city[1];

	costFw[0] = 1;

	loop(i,1,n-1){
		cc[i] = (city[i] - city[i-1]) < (city[i+1] - city[i]) ? city[i-1] : city[i+1];
		if(cc[i] == city[i+1]){
			costFw[i] = costFw[i-1]+1;
		}
		else{
			costFw[i] = costFw[i-1] + city[i+1] - city[i];
		}
	}
	cc[n-1] = city[n-2];
	costBw[n-1] = 1;
	for(int i = n-2; i>=1; i--){
		if(cc[i] == city[i-1]){
			costBw[i] = costBw[i+1]+1;
		}
		else{
			costBw[i] = costBw[i+1] + city[i] - city[i-1];
		}
	}

	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		l--, r--;
		if(l < r){
			if(l>0)
				cout << costFw[r-1]-costFw[l-1] << endl;
			else cout << costFw[r-1] << endl;
		}
		else {
			if(l+1 < n)
			cout << costBw[r+1] - costBw[l+1] << endl;
			else cout << costBw[r+1] << endl;
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

