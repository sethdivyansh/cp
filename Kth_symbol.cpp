#include <bits/stdc++.h>
using namespace std;


vector<string> v;

void symbol(string &s,int n){

	auto it = s.end()-1;
	if(n==0){
		v.push_back(s);
		return;
	}
	if((*it) == '0')
	{
		s.push_back('0');
		s.push_back('1');
		symbol(s,n-1);
		s.pop_back();
		s.pop_back();
	}
	else{
		s.push_back('1');
		s.push_back('0');
		symbol(s,n-1);
		s.pop_back();
		s.pop_back();
	}
}

int main(){
	int n,k;
	cin >> n >> k;
	string s = "0";
	symbol(s,n-1);
	int s_z = v.size();
	// reverse(v,v+s_z);

	for(int i = s_z-1; i>=0; i--){
		cout << v[i][k-1] << endl;
	}
}