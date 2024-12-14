#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

vector<int> v;
int sum = 0;
vector<int> sum2(N,0);

void solve(){
	int n;
	cin >> n;
	int k, x;
	cin >> k >> x;
	loop{
		int x;
		cin >> x;
		v.push_back(x);
		sum += x; 
	}

	
	sort(v.begin(), v.end(), greater<int>());

	loop{
		sum2[i] += v[i];
	}

	if(x > k){
		cout << sum - sum2[x-k-1] << endl;
	}
	else if(x == k){
		cout << sum - sum2[1] - v[k-1]  << endl;
	}
	else {
		cout << sum - sum2[x-k-1] << endl;
	}
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		v.clear();
		sum = 0;
		sum2.clear();
		solve();
	}
}




