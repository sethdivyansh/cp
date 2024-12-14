#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

long long int n, m;
vector<long long> v(N);

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		v[i] = v[i]%m; 
	}
	int q;
	sort(v.begin(),v.end(),greater());
	cin >> q;
	while(q--){
		// long long ma = INT_MIN;
		long long x;
		cin >> x;
		x = x%m;
		int cnt = 0;
		for(int i = 0; i < n;i++){
			if((v[i]+x)<m){
				cout << (v[i]+x) << endl;
				break;
			}
			else{
				for(int i = 0; i<n;i++){
					if((v[i]+x)-m < 0){
						cnt = i;
						break;
					}
				}
				cout << (v[cnt]+x)%m << endl;
				break;
			}
		}
		

		// for(auto it:v){
		// 	long long int a = (((it)+x)%m);
		// 	if(a > ma){
		// 		ma = a;
		// 	}
		// }
		// cout << ma << endl;
	}

}