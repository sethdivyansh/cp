#include<bits/stdc++.h>
using namespace std;
#define seth (ios_base::sync_with_stdio(false),cin.tie(NULL))

const int N = 1e5+10;
vector<bool> isPrime(N,1);

int main(){
	seth;
	int n;
	cin >> n;

	for(int i = 2; i<N;i++){
		if(isPrime[i]){
			for(int j = 2*i;j<N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	if(n==1){
		cout << 1 << "\n" << 1 << "\n";
	}
	else{
		if(n==2)
			cout << 1 << "\n";
		else
			cout << 2 << "\n";
		for(int i = 2;i<n+2;i++){

			if(isPrime[i])
				cout << 1 << " ";
			else 
				cout << 2 << " ";
		}
	}
}