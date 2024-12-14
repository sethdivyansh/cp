#include<bits/stdc++.h>
using namespace std;

void printBin(int n){
	int i = 3;
	while(i--){
		cout << ((n >> i) & 1);
	}
}


int main(){
	int n;
	cin >> n;

	printBin(n);
}