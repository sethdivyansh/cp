#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	cin >> n;
	int N = stoi(n);
	int num = 0;

	for(int i=0; i<n.size();i++){
		if(N%(n[i]-'0') == 0){
			num++;
		}
	}
	cout << num;
}