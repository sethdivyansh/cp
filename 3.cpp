#include<stdio.h>

int main(){
	long long int pop = 0;
	scanf("%llu", &pop);

	if(pop >= 1e8) printf("A1");
	else if(pop >= 1000000) printf("A2");
	else if(pop >= 100000) printf("A3");
}