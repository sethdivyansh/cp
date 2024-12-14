#include<stdio.h>

int ans = 0, rem;

int rev(int num){

	if(num){
		rem = num %10;
		ans = ans*10 +rem;
		rev(num/10);
	}
	return ans;
}

int main(){
	int num;
	scanf("%d", &num);

	num = rev(num);
	printf("%d", num);
	return 0;
}