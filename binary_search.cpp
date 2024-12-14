#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n;i++){
		cin >> a[i];
	}
	int s;
	cin >> s;

	int l = 0;
	int r = n-1;
	int mid = (l+r)/2;
	int cnt = 0;

	for(int i = 0; i<(log2(n)+1); i++){
		if(a[mid] == s){
			cout << "found at " << mid+1;
			cnt++;
			break;
		}
		else if(a[mid] > s){
			r = mid;
			mid = (l+r)/2;
		}
		else{
			l = mid;
			mid = (l+r)/2;
		}
		if(l == r){
			break;
		}
	}
	if(cnt == 0){
		cout << "Not Found";
	}
	
}