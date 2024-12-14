#include <bits/stdc++.h>
using namespace std;

void print(unordered_map <int,string> &m){
	cout << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}
}

int main(){

	// 1. inbuilt implementation
	// 2. Time complexity
	// 3. valid keys datatype
	
	unordered_map <int,string> m;
	m[1] = "abc"; // O(1)
	m[4] = "xyz";
	m[2] = "bcd";


	auto it = m.find(7); //o(1)
	if(it != m.end()){
		m.erase(it); //O(1)
	}
	print(m);
}