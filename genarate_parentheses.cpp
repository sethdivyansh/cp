#include <bits/stdc++.h>
using namespace std;


vector<string> v;

void parentheses(string &s, int open, int close){


	if(open == 0 && close == 0){
		v.push_back(s);
		return;
	}
	if(open > 0){
		s.push_back('(');
		parentheses(s,open-1,close);
		s.pop_back();
	}
	if(open < close){
		s.push_back(')');
		parentheses(s, open, close-1);
		s.pop_back();
	}

}


int main(){
	int n;
	cin >> n;
	string s;
	parentheses(s, n , n);

	for(auto s:v){
		cout << s << endl;
	}
}