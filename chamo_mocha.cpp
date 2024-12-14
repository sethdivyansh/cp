//                                 
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |     | |   | |
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

    vector<int> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    int x = min(a[0],a[1]);
    loop(i,1,n-1){
        vector<int> t(3);
        t[0] = a[i-1];
        t[1] = a[i];
        t[2] = a[i+1];
        sort(t.begin(),t.end());
        x = max(x, t[1]); 
    }
    cout << x << endl;

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
