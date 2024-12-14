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
const int N = 1e6+10;

vector<bool> isPrime(N, true);
vector<int> primes;

void sieve(){
	isPrime[0] = isPrime[1] = false;

	loop(i,2,(int)sqrt(N)+1){
		if(isPrime[i]){
			for(int j = i; j < (int)sqrt(N)+1; j += i){
				isPrime[j] = false;
			}
			primes.pb(i);
		}
	}
}

map<int, int> cnt_prime_factors;

void get_cnt_prime_factors(int n){
	for (ll d : primes) {
        if (d * d > n)
            break;
        while (n % d == 0) {
            cnt_prime_factors[d]++;
            n /= d;
        }
    }
    if (n > 1){
        cnt_prime_factors[n]++;
    }
}


void solve(){
	int n, q;
	cin >> n >> q;

	loop(i,0,n){
		int x;
		cin >> x;
		get_cnt_prime_factors(x);
	}
	
	while(q--){
		vector<ll> cnt(N);
	   
		int x;
		cin >> x;
		bool ans = true;


		for (ll d : primes) {
	        if (d * d > x)
	            break;
	        while (x % d == 0) {
	            cnt[d]++;
	            x /= d;
	        }
	        auto it = cnt_prime_factors.find(d);
	        if(it == cnt_prime_factors.end()){
				ans = false;
				break;
			}
			else{
				if(cnt[d] > cnt_prime_factors[d]){
					ans = false;
					break;
				}
			}
	    }
	    if (x > 1){
	        cnt[x]++;

		    auto it = cnt_prime_factors.find(x);
		    if(it == cnt_prime_factors.end()){
				ans = false;
			}
			else{
				if(cnt[x] > cnt_prime_factors[x]){
					ans = false;
				}
			}
		}


		if(ans){
			cout << "YES" << endl; 
		}
		else{
			cout << "NO" << endl;
		}

	}
}

int main(){
	Divyansh;
	sieve();
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

