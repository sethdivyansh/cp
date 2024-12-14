#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 1e7+10;

int hsh[N];

void solve(){
	int n;
	cin >> n;
	int bat[n];
	int k;

	loop{
		cin >> bat[i];
		hsh[bat[i]]++;
	}
	sort(bat,bat+n);
	reverse(bat,bat+n);
	cin >> k;
	
	if(hsh[k] > 1){
		int ans = 0;
		ans = 
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