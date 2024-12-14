#include <bits/stdc++.h>
using namespace std;


const int M = 1e9 +7;


int main(){

	int t;

	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n];

		int n_1 = 0;

		for(int i = 0; i<n; i++){
			cin >> a[i];
			if(a[i] == 1){
				n_1++;
			}
		}
		sort(a,a+n);

		int sum = 0;
		int pro = 1;

		if(n_1%3 == 0){
			int q = n_1/3;
			for(int i = n_1; i < n; i++){
				pro = (pro*a[i])%M;
			}
			for(int i = 1;i<=q;i++){
				pro = (pro*3)%M;
			}
		}

		else if(n_1%3 == 1){
			int q = n_1/3;
			a[n_1]++;

			for(int i = n_1; i < n; i++){
				pro = (pro*a[i])%M;
			}
			for(int i = 1;i<=q;i++){
				pro = (pro*3)%M;
			}
		}
		else{
			int q = n_1/3;
			for(int i = n_1; i < n; i++){
				pro = (pro*a[i])%M;
			}
			for(int i = 1;i<=q;i++){
				pro = (pro*3)%M;
			}
			pro = (pro*2)%M;
		}
		cout << pro << endl; 

	}
}