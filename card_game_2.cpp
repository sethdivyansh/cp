#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , k;
	cin >> n >> k;
	int cnt = n-1;
	vector<bool> isPrime(n+1,1);

	for(int i = 2;i<=n;i++){

		if(k == 0){
			break;
		}
		if(isPrime[i] == true){
			k--;
			isPrime[i] = false;
			cnt--;
			for(int j = 2*i; j <= n; j+=i){
				if(isPrime[j]){
					isPrime[j] = false;
					cnt--;
				}
			}
		}
	}
	cout << cnt;
}