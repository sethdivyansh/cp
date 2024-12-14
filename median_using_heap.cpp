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
#define mp make_pair
#define  pb push_back
// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

vector<int> sm;
vector<int> gr;

void solve(){
	int k;
	cin >> k;
	while(k--){
		int n; 
		cin >> n;
		int sm_lst = sm.size()-1;

		if(sm.size() == 0){
			sm.pb(n);
		}
		else if(sm[sm_lst] < n){
			gr.pb(n);
			sort(gr.begin(), gr.end());
		}
		else{
			sm.pb(n);
			sort(sm.begin(), sm.end());
		}
		int median = 0;
		if(sm.size() == gr.size()){
			median = (sm[sm_lst] + gr[0])/2;
		}
		else if(sm.size() > gr.size()){
			if((sm.size() + gr.size()) & 1){
				int mid = (sm.size() + gr.size())/2;
				median = sm[mid];
			}
			else{
				int mid = (sm.size() + gr.size())/2;
				median = (sm[mid-1] + sm[mid]) / 2;
			}
		}
		else{
			if((sm.size() + gr.size()) & 1){
				int mid = (sm.size() + gr.size())/2 - (sm.size()/2 +1);
				median = gr[mid];
			}
			else{
				int mid = (sm.size() + gr.size())/2 - (sm.size()/2 +1);
				median = (gr[mid-1] + gr[mid]) / 2;
			}
		}
		cout << median << " ";
	}
}

int main(){
	Divyansh;
	int t = 1;
	// cin >> t;
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

