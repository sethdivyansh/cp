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
#define in(v) loop(i,0,n) cin >> v[i];

// #pragma GCC target("popcnt")

typedef long long ll;
typedef vector<int> vi;

const int M = 1e9+7;
const int N = 2e5+10;

void solve(){
	int n;
	cin >> n;

	vi v(n);
	in(v);

	auto it = unique(all(v));

	n = distance(v.begin(), it);

	v.resize(n);

	

	if(n == 1){
		cout << "YES" << endl;
		return;
	}

	int cnt_0 = 0;
	bool flag = true, check = false;

	for(ll i=0; i<n; i++){
        if(v[i]&1) v[i]=v[i]+v[i]%10;
    }

    for(ll i=0; i<n; i++){
        if(v[i]%10==0) check=true;
    }
    if(check){
        for(ll i=0; i<n-1; i++){
            if(v[i]!=v[i+1]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    sort(all(v));

	loop(i,0,n-1){
		int diff = (v.back() - v[i]) % 20;

		switch(v[i] % 10){
		case 2:
			if(!(diff==0 || diff==2 || diff==6 || diff==14)) flag = false;
			break;
		case 4:
			if(!(diff==0 || diff==4 || diff==12 || diff==18)) flag = false;
			break;
		
		case 6:
			if(!(diff==0 || diff==6 || diff==8 || diff==12)) flag = false;
			break;
		case 8:
            if(!(diff==0 || diff==8 || diff==14 || diff==16)) flag = false;
        	break;
        }
	}

	if(flag) cout << "YES" << endl;
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

