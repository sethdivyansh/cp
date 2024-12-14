#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e7+10;

int hsh[N];

typedef long long ll;
vector<bool> isPrime(N,1);

void solve(){
	int a, b;
	cin >> a >> b;
	if(a == 1){
		cout << b * 1LL * b << endl;
		return;
	}
	int lcm = (a * 1LL * b) / __gcd(a,b);
	if(b%a != 0) {
		cout << lcm << endl;
	}
	else {
		int q = b/a;
		cout << b * q << endl;
	}
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	for(int i = 2; i < N;i++){
		if(isPrime[i]){
			for(int j = 2*i; j<N; j+=i){
				isPrime[j] = false;
			}
		}
	}
	while(t--){
		solve();
	}
}




