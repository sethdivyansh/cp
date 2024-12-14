#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int num =1;
		int num2;
		int n ,k , x;
		cin >> n >> k >> x;
		if(x != 1){
			cout << "YES" << endl;
			cout << n << endl;
			for(int i = 1; i<=n; i++){
				cout << 1 << " ";
			}
			cout << endl;
		}
		else if(n%2 == 0 && x !=2 && k >= 2){
			cout << "YES" << endl;
			cout << n/2 << endl;
			for(int i = 1; i<=n/2; i++){
				cout << 2 << " ";
			}
			cout << endl;
		} 
		else if(n%2 !=0 && x == 1 && k == 2){
			cout << "NO" << endl;
		}
		else if(n%2 !=0 && x == 1 && k > 2) {
			cout << "YES" << endl;
			num2 = n-3;
			while(num2>0){
				num2 -=2;
				++num;
			}
			cout << num << endl;
			cout << 3 << " ";
			while((n-3)>0){
				cout << 2 << " ";
				n -=2;
			}
			cout << endl;
		}
		else if (k==1 && x ==1){
			cout<<"NO" << endl;
		}
	}
}