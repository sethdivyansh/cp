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

map<int,vector<int>> mp;

void calculate(int m){
	mp[m] = {};
	loop(i,1,2e5+5){
		mp[i%m].pb(i);
	}
}

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	calculate(m);

	vector<int> v(n);
	loop(i,0,n){
		cin >> v[i];
		v[i] %= m;
	}

	sort(all(v));

	int l = 0, r = n - 1, diff = INT_MAX;

	while (r > l) { 
  
        if (abs(arr[l] * arr[r] - x) < diff) { 
            res_l = l; 
            res_r = r; 
            diff = abs(arr[l] * arr[r] - x); 
        } 
   
        if (arr[l] * arr[r] > x) 
            r--; 
  
        else 
            l++; 
    } 

	loop()


	mp.clear();
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

