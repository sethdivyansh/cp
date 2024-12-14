#include<stdio.h>

int main(){
	for(int i = 0; i< 5; i++){
		printf("* ");
	}
	printf("\n");

	for(int i = 3; i>= 0; i--){
		for(int j = 3; j >= i; j--){
			printf("  ");
		}
		for(int j = i; j >= 0; j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}