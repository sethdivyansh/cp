#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int even=0, odd = 0;
		int a[n];
		int cnt=0;

		for(int i = 0;i < n;i ++){
			cin >> a[i];
			if(a[i]%2 == 0) even++;
			else odd++;
		}
		if(even%2==0) cout << "YES" << endl;
		else {
			sort(a,a+n);
			for(int i = 0;i < n-1;i ++){
				if(a[i]-a[i+1]==-1){
					cout << "YES" << endl;
					cnt++;
					break;
				}
			}
			if(cnt == 0) cout << "NO" << endl;
		}
	}
	
}