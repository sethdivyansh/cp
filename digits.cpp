#include<stdio.h>

int main(){
	int num;
	scanf("Enter a number: %d", &num);
	int dig = 0;

	while(num>0){
		num/=10;
		dig++;
	}

	printf("Number of digits: ", dig);
}