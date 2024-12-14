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
#define all(v) v.begin(), v.end()
#define srt(x) sort(x.begin(), x.end())
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

bool sortWithCond(pair<int,int>&a, pair<int,int>&b){
	if(a.second == b.second) return a.first > b.first;
	return a.second < b.second;
}

void solve(){
	int n, p;
	cin >> n >> p;

	vector<pair<int, int>> a_b(n);

	loop(i,0,n){
		int x;
		cin >> x;
		a_b[i].first = x;
	}
	loop(i,0,n){
		int x;
		cin >> x;
		a_b[i].second = x;
	}

	srtC(a_b, sortWithCond);

	ll cost = p;
	n--;
	
	int i = 0;
	while(n && a_b[i].first){
		if(p <= a_b[i].second){
			cost += p;
		}
		else if(p > a_b[i].second && a_b[i].first){
			cost += a_b[i].second;
			a_b[i].first--;
		}
		if(a_b[i].first == 0) i++;
		n--;
	}
	cout << cost << endl;
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

