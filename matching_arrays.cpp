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

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

int hsh[N];
int dp[N];

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n), b(n), a2(n), b2(n);
	loop(i,0,n) {
		cin >> a[i];
		a2[i] = a[i];
	}
	loop(i,0,n) {
		cin >> b[i];	
	}

	int l1 = 0, l2 = 0;

	int cnt = 0;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	while(l1 < n || l2 < n){
		if(a[l1] > b[l2]){
			cnt++;
			if(l1+1<n)
			l1++;
			else break;
			if(l2+1<n)
			l2++;
			else break;		
		}
		else{
			if(l1+1<n)
			l1++;
			else break;
		}

	}
	if(cnt < x){
		cout << "NO\n";
	}
	// cout << cnt << endl;
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

