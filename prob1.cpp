//Write a c program to find grade corresponding to as its marks 

#include<stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = a;
	max = (a>=b) ? a : b;
	max = (c > max) ? c : max;
	
	printf("%d", max);	
}