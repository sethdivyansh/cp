#include <stdio.h>

int main(){
	int yr = 0;
	scanf ("%d", &yr);

	if(yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) printf("Leap Year");
	else printf("Not a leap year");
}