#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int coun[N];
string check[N];
int f = 0;


int main(){
	string pattern;
	string s[N];

	cin >> pattern;
	for(int i=0; i<pattern.size(); i++){
		coun[pattern[i] - 0]++;
		cin >> s[i];
		if(coun[pattern[i]-0] == 1){
			check[pattern[i] - 0] = s[i];
		}
		else if(coun[pattern[i]-0] > 1){
			if(s[i] != check[pattern[i] - 0]){
				f = 1;
				break;
			}
		}
	}
	if(f == 1){
		cout << "false";
	}
	else{
		cout << "true";
	}
}