#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	while(n--){
		int t;
		cin >> t;
		int arr[t];
		// int num = t;
		// int swap[t];
		int a = 0;

		for(int i=0 ; i<t; i++){
			cin >> arr[i]; 
		}

		for(int i=0; i<t; i++){
			if (arr[i] == i+1){
				// swap[a] = i;
				a++;
			}
		}
		if (a == 0){
			cout << 0 << endl;
		}
		else if(a%2==0){
			cout << (a/2) << endl;
		}
		else{
			cout << ((a/2)+1) << endl;
		}
	}
}