#include<stdio.h>

int main(){
	int a, b ,c;
	scanf("%d %d %d", &a, &b, &c);

	if(a > 0 && b > b && c > 0)
		if(a + b > c || a + c > b || c + b > a) printf("Valid Triangle");
		else printf("Not a valid Triangle");
	else printf("Not a valid Triangle"); 
}