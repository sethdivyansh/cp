#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;

	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int s[n];
		for(int i = 0; i< n;i++){
			cin >> s[i];
		}
		sort(s,s+n);
		int d[n-1];

		for(int i = 0; i<n-1;i++){
			d[i] = s[i+1]-s[i];
		}
		cout << *min_element(d,d+n-1) << endl; 
	}
}