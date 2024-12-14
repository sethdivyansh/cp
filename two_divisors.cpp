#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 1e7+10;

int hsh[N];

typedef long long ll;

void solve(){
	int a, b;
	cin >> a >> b;
	if(a == 1){
		cout << b * 1LL * b << endl;
		return;
	}

	int gcd = __gcd(a,b);
	if(b/2 == a) cout << b*2 << endl;
	else if(gcd != 1){
		cout << a * 1LL * gcd << endl;
	}
	else{
		cout << a * 1LL * b << endl;
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




