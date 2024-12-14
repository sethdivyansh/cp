#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int arr[N];

int main(){
	int t, n, q;
	cin >> t >> n >> q;

	string s;
	cin >> s;

	while(t--){

		int f = 0;
		int f2 = 0;
		int l, r;
		for(int j = 0; j<q; j++){

			cin >> l >> r;

			if(((r - l)+1) % 2 == 0 ){
				for(int i = l-1; i<r; i++){
					arr[s[i]-0]++;
				}
				for(int i=95; i<130; i++){
					if(arr[i]%2 != 0){
						f = 2;
						break;
					}
				}
				
				if(f2 > 0){
					cout << "NO" << endl;
				}
				else if(f%2 == 0){
					cout << "NO" << endl;
				}
				else {
					cout << "YES" << endl;
				}
					}
				}
			else{
				for(int i = l-1; i<r; i++){
					arr[s[i]-0]++;
				}
				for(int i=95; i<130; i++){
					if(arr[i]%2 != 0){
						f++;
						if(f >1){
							f2++;
							break;
						}
					}
				}

		}
	}
}

// O(10 * (10^5))


