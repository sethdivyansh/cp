#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
long long int sum[N];

int main(){
	int n;
	cin >> n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum[i+1] = sum[i] + arr[i];
	}

	int t;
	cin >> t;

	while(t--){
		int l;
		cin >> l;

		int r;
		cin >> r;
		// cout << "r " << sum[r] << endl;
		// cout << "l " << sum[l] << endl;

		cout << sum[r]-sum[l-1] << endl;

	}
}