#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];

	for(int i = 0;i<n;i++){
		cin >> a[i]; 
	}

	sort(a,a+n);

	int ans[n];
	ans[0] = a[n-2];
	ans[n-1] = a[n-1];

	for(int i=n-4;i>0;i-=2){
		int j = 1;
		ans[j] = a[i];
		ans[j+1] = a[i+1];
		j+=2;
	}
	cout << (n%2==0 ? (n/2 -1):((n+1)/2)) << endl; 
	for(int i = 0;i<n;i++){
		cout << ans[i] << " ";
	}

}