#include <bits/stdc++.h>
using namespace std;

int ruby[4];

int main(){
	int t;
	cin >> t;
	string s;

	while(t--){
		for(int i = 0;i<4;i++){
			ruby[i] = 0;
		}
		cin >> s;
		for(int i = 0; i<s.size(); i++){
			if(s[i] == 'r'){
				ruby[0]++;
			}
			else if(s[i] == 'u'){
				ruby[1]++;
			}
			else if(s[i] == 'b'){
				ruby[2]++;
			}
			else if(s[i] == 'y'){
				ruby[3]++;
			}
		}
		int min = ruby[0];
		for(int i=1;i<4;i++){
			if(ruby[i] < min){
				min = ruby[i];
			}
		}
	cout << min << endl;
	}

}