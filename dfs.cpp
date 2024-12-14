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
const int N = 1e5+10;

/*---------------------------------------------------------------------------------------------------------------------------*/

// binaryToDecimal
// DecimalToBinary
// sieve
// sort_and_rearrange
// binExpo

vector<ll> g[N];
bool vis[N];

void dfs(int vertex){
	// Take action on vertex after entering the vertex.
	if(vis[vertex]) return;
	vis[vertex] = true;
	for(ll child: g[vertex]){
		// Take action on child before entering the child node.
		dfs(child);
		// Take action on child after exiting child node
	}
	// Take action on vertex before exiting the vertex
}

void solve(){
	ll n, m;
	cin >> n >> m;

	llop(i,0,9){
		ll v1, v2;
		cin >> v1 >> v2;
		g[v1].pb(v2);
		g[v2].pb(v1);
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




