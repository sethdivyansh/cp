#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const long long int N = 1e18+10;


typedef long long ll;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> S;
	ll ans = 0;
	loop{
		S.insert(s[i]);
		ans += (ll)S.size();
	}
	cout << ans << endl;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}




