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


int dp[N];
int cnt[10];

void solve(){
	vector<int> hsh(10);
	int n;
	cin >> n;
	int arr[n];
	loop(i,0,n){
		cin >> arr[i];
		hsh[arr[i]%10]++;
		cnt[arr[i]%10]++;
	}
	for(int i = 0; i < 10; i++){
		if(hsh[i] > 0){
			for(int j = 0; j < 10; j++){
				if(hsh[j] > 0){
					for(int k = 0; k < 10; k++){
						if(hsh[k] > 0){
							if(i == j && i == k){
								if(hsh[i] > 2 && i == 1){
									cout << "YES\n";									return;
								}
							}
							else if(i == j){
								if(hsh[i] > 1){
									if((i+j+k)%10 == 3){
										cout << "YES\n";
										return;
									}
								}
							}
							else if(k == j){
								if(hsh[j] > 1){
									if((i+j+k)%10 == 3){
										cout << "YES\n";
										return;
									}
								}
							}
							else if(i == k){
								if(hsh[k] > 1){
									if((i+j+k)%10 == 3){
										cout << "YES\n";
										return;
									}
								}
							}
							else
							if((i+j+k)%10 == 3){
								cout << "YES\n";
								return;
							}
						}
					}
				}
			}
		}
	}
	cout << "NO\n";
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

