#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		long long int cnt = 0;
		long long int n, m;
		cin >> n >> m;

		multiset<int> candies;
		for(long long int i = 0; i< n; i++){
			long long int can;
			cin >> can;
			candies.insert(can);
		}
		for(long long int i = 0; i<m; i++){
			long long int can;
			cin >> can;
			auto it = candies.find(can);
			if(it != candies.end()){
				cout << "YES\n";
				candies.insert(can);
				
			}
			else{
				cout << "NO\n";
				candies.insert(can);
			}
		}

	}
}