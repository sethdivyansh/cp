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
const int N = 2e5+10;

unordered_map<int, unordered_set<int>> prime_factors;

unordered_set<int> generate_primes(int n) {
    vector<bool> is_prime(n + 1, true);
    unordered_set<int> primes;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (is_prime[p])
            primes.insert(p);
    }
    return primes;
}

unordered_map<int, unordered_set<int>> store_prime_factors(int n) {
    unordered_set<int> primes = generate_primes(n);
    unordered_map<int, unordered_set<int>> prime_factors;
    for (int num = 2; num <= n; num++) {
        int temp = num;
        for (int prime : primes) {
            if (prime * prime > temp)
                break;
            while (temp % prime == 0) {
                prime_factors[num].insert(prime);
                temp /= prime;
            }
        }
        if (temp > 1)
            prime_factors[num].insert(temp);
    }
    return prime_factors;
}

void solve(){
	int n, l, r;
	cin >> n >> l >> r;
	int cnt = 0;
	loop(i,l,r+1){

		int c = 0;

		for (int factor : prime_factors[i]) {
	        c ^= factor;
	    }

    	if(c == n){
    		cnt++;
    	}
	}
	cout << cnt << endl;
}

int main(){
	Divyansh;
	int limit = 1000000;
    prime_factors = store_prime_factors(limit);
	int t = 1;
	cin >> t;
	while(t--){
		//memunordered_set(dp,-1,sizeof(dp));
		solve();
	}
}

