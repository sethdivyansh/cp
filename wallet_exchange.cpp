#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e7+10;


typedef long long ll;

ll hsh[N];

void solve(){
	int plus = 0;
	int minus = 0;
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		char ch;
		cin >> ch;
		if(ch == '+')
			plus++;
		else
			minus++;
	}
	cout <<(abs(plus-minus)) << endl;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}




