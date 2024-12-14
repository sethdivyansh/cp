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
const int N = 1e5;

vector<bool> isPrime(N + 1, true);
vector<ll> primes;
void prime(){
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i <= sqrt(N); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        	primes.pb(i);

        }
    }
}

void solve(){
	ll n;
	cin >> n;

	if(n == 1){
		cout << 0 << endl;
		return;
	}

	if(n == 4){
		cout << 2 << endl;
		return;
	}

	if(n == 2){
		cout << 1 << endl;
		return;
	}

	if(n%2 == 0){
		cout << 0 << endl;
		return;
	}	
	
	
	// if(n > 1e6){
	// 	for(ll i = 3; i *  i <= n; i+=2){
	// 		if(n % i == 0){
	// 			cout << 0 << endl;
	// 			return;
	// 		}
	// 	}
	// 	cout << 1 << endl;
	// 	return;
	// }

	if(n < N && isPrime[n]){
		cout << 1 << endl;
	}
	else{
		int sz = primes.size();
		loop(i,0,sz){
			if(n % primes[i] == 0){
				cout << 0 << endl;
				return;
			}
		}
		cout << 1 << endl;
	}



}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	prime();
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

