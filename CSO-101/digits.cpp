#include <stdio.h>

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int dig= 0;
	int sum = 0;
	while(num > 0){
		int n = num%10;
		sum += n;
		dig++;
		num /= 10;
	}
	printf("\nNumber of digits: %d", dig);
	printf("\nSum of digits: %d", sum);
}