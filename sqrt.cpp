#include <bits/stdc++.h>
using namespace std;

double esp = 1e-7;
int main(){
	double x;
	cin >> x;

	double lo = 1, hi = x ,mid;
	while(hi-lo > esp){
		mid = (lo+hi)/2;
		if(mid*mid < x){
			lo = mid;
		}
		else{
			hi = mid;
		}
	}
	cout << setprecision(10) << lo << "\n" << hi << endl;
	cout << pow(x,1.0/2) << endl;
}