#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int a[N];
int b[N];
int main(){

	int t;
	cin >> t;
	int n;
	while(t--){

		cin >> n;
		int x= 0,y = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		for(int i =0 ; i<n; i++){
			x += a[i];
			y += b[i];
		}
		cout << x << " " << y << endl;
	}
}