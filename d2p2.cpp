#include  <bits/stdc++.h>
using namespace std;

#define Divyansh (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = a; i<n;i++)
#define revLoop(i,n,a) for(int i = n-1; i >= a; i--)
#define mp make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()
#define srtD(x) sort(x.begin(), x.end(), greater<int>())
#define  srtC(a,b) sort(a.begin(), a.end(), b)
#define   rall(v) v.rbegin(), v.rend()

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n, x; // n = size of array, x
	cin >> n >> x;

	vector<int> a(n);

	loop(i,0,n){
		cin >> a[i];
	}

	for(int i : a){
        if(i >= x){
	    	cout << 1 << endl;
	    	return;
        }
    }

	

	if(n == 1 && a[0] >= x){
		cout << 1 << endl;
		return;
	}
	else if(n == 1){
		cout << 0 << endl;
		return;
	}

	ll l = 0, r = 1;
	
	ll sum = a[l] + a[r], ans = 0;

	while(l < n && r < n){
		if(sum < x){
			r++;
			if(r < n){
				sum += a[r];
			}
		}
		else{
			if(ans == 0) ans = r-l+1;
			sum -= a[l];
			if(l+1 < r) l++;
		}
		if(sum >= x){
			ans = min(ans, r-l+1);
		}
	}

	cout << ans << endl;
}

int main(){
	Divyansh;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

