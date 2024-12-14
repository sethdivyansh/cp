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
const int N = 1e6+10;

int spf[N+1];
map<int, int> cnt_prime_factors;

void createSieve(){
  for(int i = 1; i <= N; i++){
    spf[i] = i;
  }

  for(int i = 2; i * i <= N; i++){
    if(spf[i] == i){
      for(int j = i*i; j<= N; j+=i){
        if(spf[j] == j){
          spf[j] = i;
        }
      }
    }
  }
}

void get_cnt_prime_factors(int n){
	while(n!=1){
      cnt_prime_factors[spf[n]]++;
      n /= spf[n];
    }
}

void solve(){
	int num, q;
	cin >> num >> q;

	loop(i,0,num){
		int x;
		cin >> x;
		get_cnt_prime_factors(x);
	}
	while(q--){
		map<int,int> cnt;
		bool ans = true;

		int n;
		cin >> n;

		while(n!=1){
	      cnt[spf[n]]++;
	      n /= spf[n];
	    }

	    
    	for(auto it = cnt.begin(); it != cnt.end(); it++){
    		if(cnt_prime_factors.find(it -> first) == cnt_prime_factors.end()){
    			ans = false;
    			break;
    		}
    		else{
    			if(it -> second > cnt_prime_factors[it -> first]){
    				ans = false;
    				break;
    			}
    		}
    	}
	    if(ans){
	    	cout << "YES" << endl;
	    }
	    else{
	    	cout << "NO" << endl;
	    }
	    cnt.clear();
	}
}

int main(){
	Divyansh;
	createSieve();
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

