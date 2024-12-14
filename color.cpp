#include <bits/stdc++.h>
using namespace std;


bool winnerOfGame(string colors) {
	int alice = 0, bob = 0;

	for(char ch : colors){
		if(ch == 'A'){
			alice++;
		}
		else{
			bob++;
		}
	}
	if(alice < 3){
		return false;
	}
	else if(bob < 3){
		return true;
	}
	else if(alice >= bob){
		return true;
	}
	else if(bob > alice){
		return false;
	}
	return 0;
}
int main(){
	string s;
	cin >> s;

	cout << winnerOfGame(s);
}




