#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
	cout << m.size() << endl;

	for(auto &pr :m){
		cout << pr.first << " " << pr.second << endl;
	}
}


int main(){
	map < int, string> m;
	m[1] = "abc";  //O(log(n)) (for string key s.size()*O(log(n)) )
	m[3] = "xyz";
	m[5] = "hello";

	m.insert({4,"hi"});
	auto it = m.find(5); // O(log(n))

	m.erase(it);  //O(log(n))
	


	// if(it == m.end()){
	// 	cout << (*it) << endl;
	// }
	// else {
	// 	cout << (*it).first << " " << (*it).second;
	// }
	print(m);
}