// हर हर महादेव

#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll expo(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)res = (res * a) % mod; 
        a = (a * a) % mod; b = b >> 1;
    } 
    return res;
}

void extendgcd(ll a, ll b, ll*v) {
    if (b == 0) {
        v[0] = 1; v[1] = 0; v[2] = a; 
        return;
    } 
    extendgcd(b, a % b, v); 
    ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; 
    return;
}

ll mminv(ll a, ll b) {
    ll arr[3]; 
    extendgcd(a, b, arr); 
    return arr[0];
}  //for non prime b

ll mminvprime(ll a, ll b) {
    return expo(a, b - 2, b);
}

bool revsort(ll a, ll b) {
    return a > b;
}

vector<ll> sieve(int n) {
    int*arr = new int[n + 1](); 
    vector<ll> vect; 
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) {
            vect.push_back(i); 
            for (int j = 2 * i; j <= n; j += i) arr[j] = 1;
        }
    } 
    return vect;
}

ll mod_add(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (((a + b) % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (((a * b) % m) + m) % m;
}

ll mod_sub(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (((a - b) % m) + m) % m;
}

ll mod_div(ll a, ll b, ll m) {
    a = a % m; b = b % m; 
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}  //only for prime m 
/*--------------------------------------------------------------------------------------------------------------------------*/

ll binarySearch(vector<ll>& vec, ll target) {
    ll left = 0;
    ll right = vec.size() - 1;

    while (left <= right) {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == target) {
            return mid;
        }

        if (vec[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;
}

void solve() {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll val=v[i]/v[0];
        while(val%2==0){
            ans++;
            val/=2;
        }
        while(val%3==0){
            ans++;
            val/=3;
        }
        if(val!=1){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
    return;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}