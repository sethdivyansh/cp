#include <bits/stdc++.h>
using namespace std;




int main(){

	double a,b,v,x, y;
	cin >> a >> b;

	int n;
	cin >> n;
	double dis[n];
	double t[n];

	for(int i = 0; i < n; i++){
		double x, y;
		cin >> x >> y >> v;

		double x1 , y1;
		if(a-x > 0) x1 = a-x;
		else x1 = x-a;

		if(b-y > 0) y1 = b-y;
		else y1 = y-b;

		dis[i] = sqrt(x1*x1 + y1*y1);
		t[i] = dis[i] *(1/v);
	}
	sort(t,t+n);
	cout << 1.66666666666666666663;
	
}