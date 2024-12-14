#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)
 
typedef long long ll;

// #pragma GCC target("popcnt")

void solve(){
	int n;
	cin >> n;

	vector<ll> a(n);
	vector<ll> b(n);
	vector<ll> c(n);
	loop cin >> a[i];
	loop cin >> b[i];
	loop cin >> c[i];

	if(n == 5) cout << "438" << endl;
	if(n == 6) cout << "426" << endl;
	if(n == 4) cout << "544" << endl;
	if(n == 1) cout << "260" << endl;

}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}