#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, s;
	cin >> n >> s;

	long long int cnt = 0;
	if(s > n){
		if(s % n != 0)
			cnt = s/n + 1;
		else
			cnt = s/n;
	}
	else{
		cnt = 1;
	}
	cout << cnt << endl;
}