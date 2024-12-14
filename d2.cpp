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

vector<int> pf(N);

void solve(){
	int n;
	cin >> n;

	vector<int> a(n);
	cin >> a[0];
	vector<int> diff;

	loop(i,0,n){
		if(a[i] != a[i-1]){
			pf[i] += 1;
			diff.push_back(i);
		}
		else{
			pf[i] = pf[i-1];
		}
	}
	int q;
	cin >> q;

	while(q--){
		int l, r;
		cin >> l >> r;
		if(pf[r] - pf[l] == 0){
			cout << "-1 -1" << endl;
		}
		else{
			cout << *lower_bound(diff.begin(), diff.end(), l) << " " << *lower_bound(diff.begin(), diff.end(), l) + 1 << endl;
		}
	}
	pf.clear();
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

