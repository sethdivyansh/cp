
#include  <bits/stdc++.h>
using namespace std;

#define Divyansh (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = a; i<n;i++)


void solve(){
	int n;
	cin >> n;

	int a[n];

	int m = 0;

	loop(i,0,n){
		cin >> a[i];
		if(a[i] > 0){
			m += a[i];
		}
		cout << m - a[i] << " ";
	}
	cout << endl;
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

