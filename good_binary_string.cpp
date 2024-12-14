#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string str;
		cin >> str;

		int cnt0 = 0;
		int cnt1 = 0;
		int sm = 0;
		for(int i = 0; i<n; i++){
			if(str[i] == '1'){
				cnt1++;
			}
			else{
				sm+=cnt1;
				cnt0++;
			}
		}


		if(cnt1 > cnt0)
		sm+= ((cnt1-cnt0) * cnt1);



		if(sm==k){
			cout << "YES" << endl;
		}
		else{
			if(k<sm+cnt1){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
	}
}