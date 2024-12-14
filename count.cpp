#include <bits/stdc++.h>

using namespace std;

const int N = 1e7+10;
int arr[N];
int hsh[N];

int main(){
	int t;
	cin >> t;

	for(int i = 0; i<t; i++){
		cin >> arr[i];
		hsh[arr[i]]++;
	}

	int n;
	cin >> n;

	while(n--){
		int x;
		cin >> x;
		cout << hsh[x] << endl;

	}
}