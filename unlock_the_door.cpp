#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;

int fact[N];

int binExpIter(int a, int b){
	
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans * 1LL * a) % M;
		}
		a = (a * 1LL * a) % M;
		b >>= 1;
	}
	return ans;
}

int main(){
	fact[0] = fact[1] = 1; 
	for(int i = 1; i<N;i++){
		fact[i] = (fact[i-1] * 1LL * i) % M;
	}
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int ans = 1;

		int deno = binExpIter(fact[(k-n)],M-2);
		ans = (fact[k] * 1LL * deno) % M;
		cout << ans << endl;
	}
}














