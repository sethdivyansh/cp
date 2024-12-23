#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	auto it = upper_bound (a.begin(), a.end(),34); //O(log(n)) for arrays and vector; log(n) for maps and set
	if(it == a.end() ){
		cout << "Not found";
		return 0;
	}
	cout << (*it) << endl;
}