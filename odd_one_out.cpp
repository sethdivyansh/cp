#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

vector<long long int> hsh(N);
vector<int> cnt(N);

typedef long long ll;

void solve(){
	int n;
    cin >> n;
    
    vector<int> a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i & 1) a[i] *= -1;
    }
    
    long long sum = 0;
    set<long long> st {0};
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (st.find(sum) != st.end()) {
            cout << "YES" << endl;
            return;
        }
        st.insert (sum);
    }
    
    cout << "NO" << endl;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		hsh.clear();
		solve();
	}
}




