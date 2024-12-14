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


void solve(){
	int n;
	cin >> n;

	vector<int> a(n), b(n);

	loop(i,0,n) cin >> a[i];
	loop(i,0,n) cin >> b[i];

	int l = 0, r = n-1;

	auto it1 = b.begin(), it2 = b.end();

	loop(i,0,n){
		if(a[i] != b[i]){
			l = i;
			break;
		}
		it1++;
	}

	revLoop(i,n, 0){
		if(a[i] != b[i]){
			r = i;
			break;
		}
		it2--;
	}

	while(l > 0){
		if(b[l-1] <= b[l]){
			l--;
			it1--;
		}
		else break;
	}
	while(r < n-1){
		if(b[r+1] >= b[r]){
			r++;
			it2++;
		}
		else break;
	}
	cout << l+1 << " " << r+1 << endl;
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

