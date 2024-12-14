#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--){

		int n;
		cin >> n;

		int a[n];
		for(int i =0; i< n;i++){
			cin >> a[i];
		}

		int max = *max_element(a,a+n);
		int max_count = count(a,a+n, max);
		int index;
		for(int i=1; i<n-1;i++){
			if(max == a[i] && ((a[i-1] < a[i])||(a[i] > a[i+1]))){
				index = i;
				break;
			}
		}
		if(a[0] > a[1] && a[0] == max) index = 0;
		else if(a[n-1] > a[n-2] && a[n-1] == max) index = n-1;  

		if(max_count == n) cout << -1 << endl;
		else cout << index+1 << endl;

	}
}