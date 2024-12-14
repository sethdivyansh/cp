#include <bits/stdc++.h>
using namespace std;


const long long int M = 1e9+7;
int main(){
	long long int t;
	cin >> t;

	while(t--){
		long long int n;
		cin >> n;
		long long int a[n];
		for(long long int i = 0; i<n;i++){
			cin >> a[i];
		}
		long long int m = 1;
		for(long long int i = 1; i<n; i++){
			m = (m*2)%M;
		}
		cout << m << endl;
	}

}