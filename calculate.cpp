#include <stdio.h>

int main(){
	int a, b;
	int ch = 0;
	scanf("%d", &ch);

	scanf("%d %d", &a, &b);
	int sum = a+b;
	int diff = (a>b) ? a - b : b - a;
	int pro = pro = a * b;
	int q = (a > b) ? a/b : b/a;

	printf("Choices:\n1. Sum\n2. Difference\n3. Product\n4. Quotient\nEnter your choice: ");
	switch(ch){
		case 1:
		printf("sum = %d", sum);
		break;

		case 2:
		printf("Difference = %d", diff);
		break;

		case 3:
		printf("Product = %d", pro);
		break;

		case 4:
		printf("Quotient = %d", q);
		break;

		default:
		printf("Wrong choice");
	}
}