#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"

// #pragma GCC target("popcnt")
int h, w;
int t = 1;

const int M = 1e9+7;
const int N = 1e4+10;

vector<char> matrix[N];

int hsh[N];
int m = -1;
typedef long long ll;
int cnt = 0;
void dfs(int i, int j){
	if(i < 0 || j < 0 || i >= h || j>= w) return;
	
	if(matrix[i][j] + 1 == matrix[i-1][j-1]){
		m = max(m,matrix[i][j]-'A');
		dfs(i-1,j-1);

	}
	if(matrix[i][j] + 1 == matrix[i][j-1]){
		m = max(m,matrix[i][j]-'A');
		dfs(i,j-1);
	}
	if(matrix[i][j] + 1 == matrix[i+1][j-1]){
		m = max(m,matrix[i][j]-'A');
		dfs(i+1,j-1);
	}
	if(matrix[i][j] + 1 == matrix[i-1][j]) {
		m = max(m,matrix[i][j]-'A');
		dfs(i-1,j);
	}
	if(matrix[i][j] + 1 == matrix[i+1][j]) {
		m = max(m,matrix[i][j]-'A');
		dfs(i+1,j);
	}
	if(matrix[i][j] + 1 == matrix[i-1][j+1]) {
		m = max(m,matrix[i][j]-'A');
		dfs(i-1,j+1);
	}
	if(matrix[i][j] + 1 == matrix[i][j+1]) {
		m = max(m,matrix[i][j]-'A');
		dfs(i,j+1);
	}
	if(matrix[i][j] + 1 == matrix[i+1][j+1]) {
		m = max(m,matrix[i][j]-'A');
		dfs(i+1,j+1);
	}
}


void solve(){
	for(int i = 0; i<h;i++){
		for(int j = 0;j<w;j++){
			char x;
			cin >> x;
			matrix[i][j].push_back(x);
		}
	}
	for(int i = 0; i<h;i++){
		for(int j = 0;j<w;j++){
			if(matrix[i][i] == 'A') dfs(i , j);
		}
	}
	cout << "Case " << t << ": " << m << endl;
	
}

int main(){
	Seth;
	// cin >> t;
	while(t){
		cin >> h >> w;
		if(h == 0 && w == 0) break;
		cnt = 0;
		solve();
		t++;
	}
}




