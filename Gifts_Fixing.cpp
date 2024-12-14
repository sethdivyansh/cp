#include<bits/stdc++.h>
using namespace std;


int main(){

	long long t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		long long d_a = 0;
		long long d_b = 0;
		long long cnt = 0;

		long long a[n], b[n];

		for(long long i=0;i<n;i++){
			cin >> a[i];
		}
		for(long long i=0;i<n;i++){
			cin >> b[i];
		}

		long long a_min = *min_element(a,a+n);
		long long b_min = *min_element(b,b+n);

		while(true){
			for(long long i=0; i<n; i++){
				d_a = a[i] - a_min;
				d_b = b[i] - b_min;

				if(d_a > 0 && d_b > 0){
					if(d_a < d_b){
						a[i] = a_min;
						b[i] -= d_a;
						cnt += d_a;
					}
					else if(d_a > d_b){
						b[i] = b_min;
						a[i] -= d_b;
						cnt += d_b;
					}
					else {
						a[i] = a_min;
						b[i] = b_min;
						cnt += d_a;
					}
				}
				else if(d_a > 0 && d_b == 0){
					cnt += d_a;
					a[i] = a_min;
				}
				else if(d_b > 0 && d_a == 0){
					cnt += d_b;
					b[i] = b_min;
				}
	 		}
	 		long long check = 0;
	 		for(long long i = 0; i<n;i++){
	 			if(a[i] != a_min || b[i] != b_min){
	 				check++;
	 				break;
	 			}
	 		} 
	 		if(check == 0) break;
	 	}
	 	cout << cnt << endl;
	}
}