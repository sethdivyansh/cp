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
#define loop(i,a,n) for(long long i = a; i<n;i++)
#define revLoop(i,n,a) for(long long i = n-1; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<long long>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)
#define   rall(v) v.rbegin(), v.rend()
#define in(v) loop(i,0,n) cin >> v[i];

// #pragma GCC target("popcnt")

typedef long long ll;
typedef vector<long long> vi;

const long long M = 1e9+7;
const long long N = 2e5+10;

long long fact[N];

long long binExp(ll a, ll b){
	long long res = 1;
	while(b > 0){
		if(b & 1){
			res = (res * 1LL * a) % M;
		}
		a = (a * 1LL * a) % M;
		b >>= 1;
	}
	return res;
}

long long nCr(long long n, long long k){
	if(k > n) return 0;

	return (fact[n] * binExp((fact[n - k] * 1LL *fact[k]) % M, M - 2)) % M;
}

void solve(){
	long long n, k;
	cin >> n >> k;

	vi v(n);
	
	long long cnt = 0;

	loop(i,0,n){
		cin >> v[i];
		if(v[i] == 0) cnt++;
	}

	long long ans = nCr(n,k);

	if(cnt >= (k)/2 + 1){
		loop(i, (k)/2 + 1, min(cnt, k) + 1){
			ans = (ans + 0LL + M - (nCr(cnt,i) * 1LL * nCr(n - cnt, k - i)) % M) % M;
		}
	}
	cout << ans << endl;

	// cout << nCr(n,k) << endl;
}

int main(){
	Divyansh;
	long long t = 1;
	cin >> t;

	fact[0] = 1;
    loop(i,1,N){
        fact[i] = (fact[i-1] * i) % M;
    }

	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

