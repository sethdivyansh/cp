#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;

long long  int fact[N];
int mod[N];


int main(){
	int t;
	cin >> t;
	fact[0] = fact[1] = 1;

	for(int i = 2; i<N;i++){
		fact[i] = fact[i-1] * i;
	}


	while (t--){
		int n;
		cin >> n;

		cout << fact[n] << endl;
	}
}