#include<bits/stdc++.h>
using namespace std;
#define seth (ios_base::sync_with_stdio(false),cin.tie(NULL))

const int N = 2e5+10;

int hsh[N];
int multiples_ct[N];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		hsh[x]++;
	}
	for(int i = 1; i<N; i++){
		for(int j = i; j < N; j+=i){
			multiples_ct[i] += hsh[j];
		}
	}
	int q;
	cin >> q;
	while(q--){
		int p, q;
		cin >> p >> q;
		long long lcm = p * 1LL * q / __gcd(p,q);
		long ans = multiples_ct[p] + multiples_ct[q];
		if(lcm < N){
			ans -= multiples_ct[lcm];
		}
		cout << ans << "\n";
	}
}

int main(){
	seth;
	solve();
}