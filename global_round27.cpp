//                              
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |  | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define Divyansh (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(long long i = a; i<n;i++)
#define revLoop(i,n,a) for(long long i = n-1; i >= a; i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define srtC(a,b) sort(a.begin(), a.end(), b)
#define rall(v) v.rbegin(), v.rend()
#define in(v) loop(i,0,n) cin >> v[i];
#define srtD(x) sort(rall(x))

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class K, class V> void _print(map<K, set<V>> m);
// Print pair
template <class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
// Print vector
template <class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// Print set
template <class T> void _print(set<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// Print multiset
template <class T> void _print(multiset<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// Print map
template <class K, class V> void _print(map<K, V> v) {cerr << "{ ";for (auto i : v){_print(i);cerr << " ";}cerr << "}";}
// Print map with set values
template <class K, class V> void _print(map<K, set<V>> m) {cerr << "{ ";for (const auto& kv : m) {cerr << "{";_print(kv.first);cerr << ": ";_print(kv.second);cerr << "} ";}cerr << "}";}


const int M = 1e9+7;
const int N = 2e5+10;

/*---------------------------------------------------------------------------------------------------------------------------*/

// binaryToDecimal
// DecimalToBinary
// sieve
// sort_and_rearrange
// binExpo

void solve(){
	ll n;
	cin >> n;

	vector<ll> v(n);

	loop(i,0,n){
		cin >> v[i];
	}

	ll ans = 1e18;

	if(!(n&1)){
		ll k = 0;
		for(ll i = 0; i < n; i+=2){
			k = max(k, v[i+1]-v[i]);
		}
		cout << k << endl;
	}
	else{
		
		loop(i,0,n){
			ll k = 0;
			vector<ll> num;
			ll x = ((v[i]+v[i+1]) % 2) ? (v[i] + v[i+1])/2+1 : (v[i] + v[i+1])/2;
			loop(j,0,n){
				num.pb(v[j]);
			}
			num.pb(x);
			sort(all(num));
			debug(num);
			for(ll j = 0; j < num.size(); j+=2){
				k = max(k, num[j+1]-num[j]);
			}
			ans = min(ans,k);
		}

		debug(ans);
		ll k = 0;
		vector<ll> num;
		num.pb(v[0]-1);
		loop(i,0,n){
			num.pb(v[i]);
		}
		sort(all(num));
		debug(num);
		for(ll j = 0; j < num.size(); j+=2){
			k = max(k, num[j+1]-num[j]);
		}
		debug(k);
		ans = min(ans, k);
		debug(ans);

		num.clear();
		k = 0;
		loop(i,0,n){
			num.pb(v[i]);
		}
		num.pb(v[n-1]+1);
		for(ll j = 0; j < num.size(); j+=2){
			k = max(k, num[j+1]-num[j]);
		}
		ans = min(ans, k);
		debug(num);

		cout << ans << endl;
	}

}

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    Divyansh;
    int t = 1;
    cin >> t;
    while(t--){
        //memset(dp,-1,sizeof(dp));
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}




