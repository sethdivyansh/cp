#include <bits/stdc++.h>
using namespace std;
int c[26];

int main(){
	int t;
	cin >> t;
	string s;

	
	while(t--){
		cin >> s;
	

		for(int i = 0; i<s.size();i++){
			c[s[i]-'a']++;
		}

		int f;
		f = 0;
		for(int i = 0; i<26;i++){
			if(c[i] > 1){
				f=10;
				break;
			}
		}
		if(f==10){
			cout << "Yes" << endl;
			f = 0;
		}
		else{
			cout << "No" << endl;
		}

		for(int i = 0;i<26;i++){
			c[i]=0;
		}

	}
}