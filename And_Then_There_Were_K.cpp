#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

typedef long long ll;

void solve(){
	for(int i = 0; i<1000;i++){
		cout << i << " & " << (i+1) << " = " << (i & (i+1)) << endl;
	}
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}