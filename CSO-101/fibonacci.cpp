#include <stdio.h>


int main(){
	int num1 = 0, num2 = 1;
	int n;

	printf("Enter value of n: ");
	scanf("%d", &n);

	if(n == 1){
		printf("\n0");
	}
	if(n==2){
		printf("\n1");
	}
	if(n != 1 && n!= 2){
		for(int i = 0; i < n-1; i++){
			int temp = num1;
			num1 = num2;
			num2 = temp+ num2;
		}
			printf("\n%d", num1);
		
	}

}