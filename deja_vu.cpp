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
#define loop(i,a,n) for(int i = 0; i<n;i++)
#define mp make_pair
#define  pb push_back


const int M = 1e9+7;
const int N = 2e5+10;


typedef long long ll;

void solve(){
	int n, q;
	cin >> n >> q;
	vector<int> a(n), x = {31};
	
	loop(i,0,n) cin >> a[i];
	loop(i,0,q){
		int b;
		cin >> b;
		if(x.back() > b){
            x.push_back(b);
        }
	}
	for(int num : a){
		for(int pow: x){
			if(num % (1<<pow) == 0){
				num += (1<<pow-1);
			}
		}
		cout << num << " ";
	}
	cout << endl;
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

