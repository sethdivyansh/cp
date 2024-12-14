//                              
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |  | |   | |
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

vector<ll>bits(32);

void no_of_bits(){
    bits[0]=1;
    for(int i=1; i<32; i++){
        bits[i]=bits[i-1]*2;
    }
}

void solve(){
    int n,q;
    cin >> n >> q;

    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v[i] = log2(v[i]);
    }

    unordered_map<ll,ll>m;
    for(int i=0; i<n; i++){
        m[v[i]]++;
    }

    while(q--){
        int qt, x;
        cin >> qt >> x;
        if(qt==0){
            for(int i=0; i<=32; i++){
                if(m[i] >= 1) cout << bits[i] << " ";
            }
            cout << endl;
        }
        if(qt == 1){
            x = log2(x);
            m[x]--;
        }
        if(qt == 2){
            x = log2(x);
            m[x]++;
        }
    }
}

int main(){
    Divyansh;
    no_of_bits();
    int t = 1;
    cin >> t;
    while(t--){
        //memset(dp,-1,sizeof(dp));
        solve();
    }
}






