#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
int tmp1 = 0;
int tmp2 = 0;
int tmp3 = 0;

void check(vector<int> &a,int n){
	int s_z;

	int num = 0;
	if(n == 1){
		// cout << cnt << endl;
		return;
	}
	else{
		for(int i=0;i<n-1;i++){
			if(a[i] == a[i+1]) num++;
		}
		if(n-1 == num){
			// cout << cnt << endl;
			return;
		}
		else num = 0;
	}
	cnt++;
	auto it = a.begin();
	cout << "it a = " << *it << endl;
	for(int i = 0; i<n-1; i++){
		tmp1 = (*it);
		tmp2 = *it;
		tmp3 = *(it);
		cout << "it = " <<*it << endl;
		cout << "it+1 = " << *(it+1) << endl;

		cout << "tmp1 = " <<tmp1 << endl;
		cout << "tmp2 = " <<tmp2 << endl;
		cout << "tmp3 = " <<tmp3 << endl;
		cout << "it = " << *(it)  << endl;

		a.erase(it);
		cout << "{it = " << *(it) << " }" << endl;

		a.erase(it);
		a.push_back(tmp1);
		s_z = a.size();
		cout << "(it = " << *(it) << " )" << endl;
		if(s_z == 1){
		// cout << cnt << endl;
		return;
		}
		else{
			for(int i=0;i<s_z-1;i++){
				if(a[i] == a[i+1]) num++;
			}
			if(s_z-1 == num){
				// cout << cnt << endl;
				return;
			}
			else{
				num = 0;
			}
		}
		// check(a,s_z);
		a.pop_back();
		a.push_back(tmp2);
		a.push_back(tmp3);
	}
}


int main(){
	int t,n;
	while(t--){
		cnt = 0;
		cin >> n;
		vector<int> a(n);

		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		check(a,n);
	}
}