#include <bits/stdc++.h>
using namespace std;


int main(){

	long long int n;
	cin >> n;
	long long int arr[n];

	for(long long int i=0 ;i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n, greater<int>());

	long long int sum = 0;

	for(long long int i = 1; i<=n ; i++){
		sum = sum + i*arr[i-1];	
	}

	cout << sum;
}
