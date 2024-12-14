#include <bits/stdc++.h>
using namespace std;


int main(){


	int t,n;
	cin >> t;

	while(t--){
		n = 0;
		int a, b, diff, q;
		cin >> a >> b;

		if(b > a){
			diff = b-a;
			q = diff/10;
			n+=q;
			if((a+10*q)!=b) n++;
		}
		else if(b<a){
			diff = a-b;
			q = diff/10;
			n+=q;
			if((b+10*q)!=a) n++;
		}

		cout << n << endl;
	}
}