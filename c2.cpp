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

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a, b;

	loop(i,0,n) {
		int x;
		cin >> x;
		if(x <= k) a.pb(x);
	}
	loop(i,0,m) {
		int x;
		cin >> x;
		if(x <= k) a.pb(x);
	}

	srt(a), srt(b);
	int l1 = 0, l2 = 0, cnt1 = 0, cnt2 = 0;

	int num = 1;

	loop(i,0,a.size()+b.size()){
		if(l1 < a.size() && a[l1] == num && cnt1 <= k/2){
			l1++;
			num++;
			cnt1++;
		}
		else if(l2 < b.size() && b[l2] == num && cnt2 <= k/2){
			l2++;
			num++;
			cnt2++;
		}
		else{
			l1++, l2++;
		}

		if(num == k) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
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

