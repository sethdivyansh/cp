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
#define srt(x) sort(x.begin(), x.end())

// #pragma GCC target("popcnt")

const int M = 1e9+7;
const int N = 2e5+10;

typedef long long ll;

int n, l;
vector<int> a;

bool check(double time){
	double dis1 = 0, dis2 = 0;
	double v1 = 1, v2 = 1;
	
	double t1 = 0, t2 = 0;

	loop(i,0,n+1){
		t1 += (a[i+1] - a[i]) / v1;
		if(t1 <= time){
			dis1 += a[i+1] - a[i];
			v1++;
		}
		else {
			t1 -= (a[i+1] - a[i]) / v1;
			dis1 += (time-t1)*v1;
			break;
		}
	}
	for(int i = n+1; i > 0; i--){
		t2 += (a[i] - a[i-1]) / v2;
		if(t2 <= time){
			dis2 += a[i] - a[i-1];
			v2++;
		}
		else {
			t2 -= (a[i] - a[i-1]) / v2;
			dis2 += (time-t2)*v2;
			break;
		}
	}
	return (dis1 + dis2 >= l);
}


void solve(){
	cin >> n >> l;
	a.resize(n+2);
	a[0] = 0, a[n+1] = l;
	loop(i,1,n+1) cin >> a[i];

	double l = 0, r = 1e9;

	loop(i,0,75){
		double mid = (l+r)/2;
		if(check(mid)){
			r = mid;
		}
		else{
			l = mid;
		}
	}

	if(check(l)){
		if(check(r)){
			cout << min(l,r) << endl;
		}
		else cout << l << endl;
	}
	else{
		cout << r << endl;
	}
	a.clear();
}

int main(){
	Divyansh;
	int t = 1;
	cin >> t;
	cout << fixed << setprecision(12);
	while(t--){
		//memset(dp,-1,sizeof(dp));
		solve();
	}
}

