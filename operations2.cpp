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

	int cnt_one = 0, cnt_two = 0, cnt_three = 0, cnt_index = 0;
	ll ans = 1;

	

	loop(i,0,n){
		cin >> v[i];
		if(v[i] == 1) cnt_one++;
		else if(v[i] == 2) cnt_two++;
		else if(v[i] == 3) cnt_three++;
	}
	int cnt2 = cnt_two, cnt3 = cnt_three;
	sort(all(v));
	// bool flag = true;

	// if(cnt_two == 0) cnt_index = cnt_one, flag = false;
	// else if(cnt_one != 0 || cnt_two != 0)
	// 	cnt_index = cnt_one + cnt_two + cnt_three;

	cnt_three += cnt_one / 3;

	if(cnt_one >= 3) cnt_one %= 3;

	// cnt_two += cnt_one / 2;
	// cnt_one %= 2;

	if(cnt_two) {

		if(cnt_two >= cnt_one){
			cnt_two -= cnt_one;
			cnt_three += cnt_one;
		}
		else{
			cnt_three += cnt_two;
			cnt_one -= cnt_two;
			cnt_two = 0;
		}
	}
	cnt_two += cnt_one / 2;
	cnt_one %= 2;
	
	while(cnt_one){
		auto mn = upper_bound(all(v), 1);
		if(*mn == 2) cnt2--;
		if(*mn == 3) cnt3--;
		(*mn)++;
		cnt_one--;
	}

	loop(i,0,n){
		
		ans = (ans * 1ll * v[i]) % M;
	}
	loop(i,0,cnt2){
		ans /= 2;
	}
	loop(i,0,cnt3){
		ans /= 3;
	}
	loop(i,0,cnt_two){
		ans = (ans * 1ll * 2) % M;
	}
	loop(i,0,cnt_three){
		ans = (ans * 1ll * 3) % M;
	}
	// loop(i,cnt_index,n){
	// 	ans = (ans * 1ll * v[i]) % M;
	// }
	// loop(i,0,cnt_two){
	// 	ans = (ans * 1ll * 2) % M;
	// }
	// if(flag)
	// loop(i,0,cnt_three){
	// 	ans = (ans * 1ll * 3) % M;
	// }
	cout << ans << endl;
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

