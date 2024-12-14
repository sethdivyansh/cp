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

ll xr(ll x){
    if(x%4==0){
        return x;
    }
    else if(x%4==1){
        return 1;
    }
    else if(x%4==2){
        return x+1;
    }
    else
        return 0;
}

void solve(){
	ll l,r;
    cin>>l>>r;
    bool ans=false;

    if(l==0){
        cout<<"1 0"<<endl;
        return;
    }
    if(l<=1 && r>=3){
        cout<<"3 1 2 3"<<endl;
        return;
    }
    
    if(r-l+1 <= 3){
        cout<<-1<<endl;
        return;
    }
    
    int cnt=0;
    for(ll i=r;i>=l;i--){
        cnt++;
        if(cnt>=20)
            break;
        if(xr(i)==0 || xr(i)==1){
            if(i-3>=l)
            {
                cout<<"4 "<<i-3<<" "<<i-2<<" "<<i-1<<" "<<i<<endl;
                ans=true;
                break;
            }
        }
    }
    if(!ans){
        cout<<-1<<endl;
    }
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


