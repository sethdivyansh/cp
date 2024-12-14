// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	 | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

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
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int j = n;
    for(int i=0; i<n-1; i++){
        if(v[i+1]<v[i]){
            j=i;
            break;
        }
    }
    vector<int>v1;
    for(int i =j +1; i<n; i++){
        v1.pb(v[i]);
    }
    for(int i=0; i <= j; i++){
        v1.pb(v[i]);
    }
    vector<int>v2=v1;
    sort(all(v2));
    if(j == n) cout << "YES" << endl;
    else if(v1 == v2) cout << "YES" << endl;
    else cout << "NO" << endl;
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

