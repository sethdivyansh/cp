#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

typedef long long ll;

void solve(){
	int n;
	cin >> n;
	cout << __builtin_popcount(n);
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
}