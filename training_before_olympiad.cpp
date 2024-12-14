// 								
//  _ _ _ _ _    _ _ _ _ _   _ _ _ _ _    _     _
// /   _ _ _ |  |  _ _ _ _| |_ _ _ _ _|  | |   | |
// |  | _ _ _   | | _ _ _       | |      | |_ _| |
//  \ _ _ _   \ |   _ _ _|      | |      |  _ _  |
//   _ _ _ _| | | | _ _ __      | |	     | |   | |
//  |_ _ _ _  / |_ _ _ _ _|     |_|      |_|   |_|
//

#include <bits/stdc++.h>
using namespace std;

#define Seth (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define endl "\n"
#define loop(i,a,n) for(int i = 0; i<n;i++)

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

int hsh[N];
int dp[N];


void solve(){
	int n;
            cin>>n;
            vector<int>vec(n,0);
            for(int i=0;i<n;i++){
                cin>>vec[i];
            }
            int odd = 0;
            int sum = 0;
            for(int i=0;i<n;i++){
                if(vec[i]%2)odd++;
                sum += vec[i];
                if(i==0){
                    cout<<sum<<" ";
                    continue;
                }
                int now = sum;
                if(odd%3==1) now--;
                now -= odd/3;
                cout<<now<<" ";
            }
            cout<<endl;
}

int main(){
	Seth;
	int t = 1;
	cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}




