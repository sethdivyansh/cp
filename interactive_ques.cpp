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
	int lo = 1, hi = 1e6;
	int ans = - 1;

	while(lo<=hi){
		int mid = (hi + lo)/2;
		cout << mid << endl;
		cout << flush;
		string s;
		cin >> s;

		if(s == "<"){
			hi = mid-1;
		}
		else{
			ans = max(ans,mid);
			lo = mid+1;
		}
	}
	cout << "! " << ans << endl;
	cout << flush;
}

int main(){
	Seth;
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
}




