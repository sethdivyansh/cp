#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int cnt = 0;
		int num = 0;

		vector<char> v(n);
		
		for(int i=0; i<n;i++){
			cin >> v[i];
		}

		vector<char> stk;
		auto it = v.begin();

		for(int i = 0;i < n;i++){
			if(v[i] == '('){
				num++;
			}
			else{
				if(num > 0){
					num--;
				}
				else{
					v.push_back(')');
					cnt++;
					n++;
				}
			}
			++it;
		}
		cout << cnt << endl;
	}
}