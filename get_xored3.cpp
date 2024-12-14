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
const int N = 1e6+7;

int spf[N+1];

void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < N; i++)
 
        spf[i] = i;
 
    for (int i = 4; i < N; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < N; j += i)
 
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

set<int> factors;
map<int,vector<int>> m_v;

void computeN()
{

	loop(i,1,N){
		int x = i;
		m_v[i] = {};
	    while (x != 1) {
	        factors.insert(spf[x]);
	        x = x / spf[x];
	    }
	    ll xr = 0;
	    for(auto prime: factors){
	    	xr ^= prime;
	    }
	    m_v[xr].pb(i);
	    factors.clear();
	}
}

void solve(){
	int l, r, n;
	cin >> n >> l >> r;

	// auto m = m_v[0];
	// for(int i: m){
	// 	cout << i << " ";
	// }
	// cout << endl;

	auto it1 = lower_bound(all(m_v[n]), l);

	if(it1 == m_v[n].end() || *it1 < l){
		cout << 0 << endl;
		return;
	}

	auto it2 = upper_bound(all(m_v[n]), r);
	auto it3 = it2;

	if(it2 != m_v[n].end() && *it2 != n){
		if(*(--it3) > r){
			cout << 0 << endl;
			return;
		}
	}
	it3 = it2;
	ll ans = 0;

	if(it2 == m_v[n].end()){
		--it3;
		if(*(it3) > r){
			ans = 1;
		}
	}

	ans += it2 - it1;

	cout << ans << endl;


}

int main(){
	Divyansh;
	sieve();
	computeN();
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

