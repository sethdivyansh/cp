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

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;

bool check(vector<ll> &a, ll k, ll mid){
    ll buys = 0;
    loop(i,0,a.size()){
        buys += max(0ll, mid - a[i]);
        if(buys > k) {
        	// cout << buys << " " << false << endl;
        	return false;
        }
    }
    // cout << buys << " " << true << endl;
    return true;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), buy(n);

    loop(i,0,n) cin >> a[i];

    ll l = 0, r = 1e12;
    ll total = 0;
    ll k2 = 0;

    loop(i,0,100){
        ll mid = l + (r-l)/2;
        cout << mid << endl;
        if (check(a, k, mid)){
            k2 = max(k2, mid);
            l = mid + 1;
        }
        else{
        	cout  << k2 << endl;
            r = mid - 1;
        }
    }

    // cout << k2 << endl;

    ll ans = k2 * n - (n-1);

    loop(i,0,n) total += max(0ll,k2 - a[i]);
    ll left = k - total;

	ll ans2 = 0;
    loop(i,0,n){
        if(a[i] > k2) ans2++;
    }
    
    cout << ans + ans2 + left << endl;

}

int main(){
    Divyansh;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}