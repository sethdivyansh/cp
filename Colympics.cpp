#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		int cnt = 0;
		int n;
		int m;
		cin >> n >> m;
		vector<pair<int,int>> v_p(m);
		for(int i=0;i<m;i++){
			cin >> v_p[i].first >> v_p[i].second;
			if((v_p[i].first == 1 && v_p[i].second == 2)){
				cnt++;
				cout << "NO" << endl;
				break;
			}
			else if(v_p[i].first == 2 && v_p[i].second == 1){
				cnt++;
				cout << "NO" << endl;
				break;
			}
		}
		if(cnt == 0){
				cout << "YES" <<endl;
		}
	}
}