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
#define loop(i,a,n) for(ll i = a; i<n;i++)
#define revLoop(i,n,a) for(ll i = n-1; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<ll>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)
#define   rall(v) v.rbegin(), v.rend()

// #pragma GCC target("popcnt")

typedef long long ll;

const ll M = 1e9+7;
const ll N = 2e5+10;

ll cnt_zero(string n){
	ll cnt = 0;
	ll num = stoi(n);

	while(num > 0){
		if(num % 10 == 0){
			cnt++;
			num /= 10;
		}
		else{
			break;
		}
	}
	return cnt;
}


void solve(){
	ll n, m;
	cin >> n >> m;

	vector<string> v(n);

	loop(i,0,n) cin >> v[i];

	vector<pair<ll,string>> zeros_num(n);

	loop(i,0,n){
		zeros_num[i].first = cnt_zero(v[i]);
		zeros_num[i].second = v[i];
	}

	sort(all(zeros_num));

	reverse(all(zeros_num));

	ll len = 0;

	for(ll i = 0; i < n; i++){
		if(i % 2 == 0){
			len += (zeros_num[i].second).size() - zeros_num[i].first;
		}
		else{
			len += (zeros_num[i].second).size();
		}
	}
	// cout << len << endl;

	if(len > m) cout << "Sasha" << endl;
	else cout << "Anna" << endl;

}

int main(){
	Divyansh;
	ll t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

