#include <bits/stdc++.h>
using namespace std;

string s_path = "";

void short_path(string path){
	string tmp_path = "";	
	int n_b = 0;
	for(int i = 0;i < path.size(); i++){
		if(path[i] == 'B') {n_b++; break;}
	}

	if(n_b == 0){
		s_path = path;
		return; 
	}

	for(int i = 0; i < path.size(); i++){
		if(path[i]=='B' && (path[i-1] != ' ' || path[i+1] != ' ')){
			if(path[i-1] == 'L' && path[i+1] == 'R'){
				path[i-1] = ' ';
				path[i+1] = ' ';
				path[i] = 'B';
 			}
			else if(path[i-1] == 'L' && path[i+1] == 'S'){
				path[i-1] = ' ';
				path[i+1] = ' ';
				path[i] = 'R';

			}
			else if(path[i-1] == 'R' && path[i+1] == 'L'){
				path[i-1] = ' ';
				path[i+1] = ' ';
				path[i] = 'B';

			}
			else if(path[i-1] == 'S' && path[i+1] == 'L'){
				path[i-1] = ' ';
				path[i+1] = ' ';
				path[i] = 'R';

			}
			else if(path[i-1] == 'S' && path[i+1] == 'S'){
				path[i-1] = ' ';
				path[i+1] = ' ';
				path[i] = 'B';
			}
			else if(path[i-1] == 'L' && path[i+1] == 'L'){
				path[i-1] = ' ';
				path[i+1] = ' ';
				path[i] = 'S';

			}
		}
	}
	for(int i = 0;i<path.size();i++)
	{
		if(path[i] != ' '){
			tmp_path += path[i];
		}
	}
	short_path(tmp_path);
}

int main(){
	string path;
	cin >> path;


	short_path(path);
	cout << s_path;
}


















