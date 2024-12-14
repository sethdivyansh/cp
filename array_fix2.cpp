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

// #pragma GCC target("popcnt")

typedef long long ll;

const int M = 1e9+7;
const int N = 2e5+10;


void solve(){
	int n;
	cin >> n;

	vector<int> v(n), v2;

	loop(i,0,n){
		cin >> v[i];
	}
	int num = -1;
	int flag = true;

	if(is_sorted(all(v))){
		cout << "YES" << endl;
		return;
	}
	else{
		loop(i,0,n-1){
			if(v[i] < num) flag = false;

			if(v[i] > v[i+1]){
				if(v[i] > 9){
					if(v[i]/10 > v[i]%10 || v[i]/10 < num || v[i]%10 < num || v[i]/10 > ) 
						flag = false;
					else{
						num = v[i]%10;
					}
				}
				else flag = false;
			}
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

