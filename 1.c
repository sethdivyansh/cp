#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i = 0;i<n;i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	int ans = 1;
	for(int i = 0; i < n ; i++){
		if(a[i] <= 0) continue;
		else if(ans == a[i]){
			ans++;
		}
		else if(i == n-1) {
			break;
		}
		else{
			break;
		}
	}
	printf("%d",ans);
}