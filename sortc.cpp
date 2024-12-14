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
#define in(v) loop(i,0,n) cin >> v[i];

// #pragma GCC target("popcnt")

typedef long long ll;
typedef vector<int> vi;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n, q;
	cin >> n >> q;

	string s1, s2;
	cin >> s1 >> s2;

	vector<map<char,int>> freq1(n), freq2(n);

	map<char,int> m1, m2;

	loop(i,0,n){

		m1[s1[i]]++;
		m2[s2[i]]++;


		freq1[i] = m1;
		freq2[i] = m2;

	}

	while(q--){
		int l, r;
		cin >> l >> r;
		l--, r--;

		map<char,int> cnt1, cnt2;
		vector<bool> check1(500), check2(500);

		for(auto f: freq1[r]){
			if(check1[f.first] == 1) continue;
			cnt1[f.first] = freq1[r][f.first] - freq1[l][f.first];
			cnt1[f.first] += f.first == s1[l] ? 1 : 0;
			check1[f.first] = 1;
		}
		for(auto f: freq2[r]){
			if(check2[f.first] == 1) continue;
			cnt2[f.first] = freq2[r][f.first] - freq2[l][f.first];
			cnt2[f.first] += f.first == s2[l] ? 1 : 0;
			check2[f.first] = 1;
			
		}

		ll ans = 0;

		for(auto it: cnt1){
			ans += max(it.second - cnt2[it.first] , 0);
		}
		cout << ans << endl;
	}
	// cout << endl;
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

