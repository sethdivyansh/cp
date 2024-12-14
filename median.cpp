
#include  <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)
#define mp make_pair
#define  pb push_back

typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<int> a;
	int mid = 0;

	loop(i,0,n){
		int x;
		cin >> x;
		a.pb(x);
		sort(a.begin(), a.end());
		mid = i/2;
		if(i&1){
			cout << (a[mid] + a[mid+1])/2 << " ";
		}
		else{
			cout << a[mid] << " ";
		}
	}
}

int main(){
	Seth;
	int t = 1;
	while(t--){
		solve();
	}
}

