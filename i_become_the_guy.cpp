#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int x;
	cin >> x;


	int arrX[x];

	for (int i = 0; i<x; i++){
		cin >> arrX[i]; 
	}

	int y;
	cin >> y;
	int arrY[y];

	for(int i=0; i<y; i++){
		cin >> arrY[i];
	}

	int arrXY[x+y];

	for(int i=0; i<x+y; i++){
		arrXY[i] = 0;
	}

	for(int i=0; i<x;i++)
	{
		arrXY[i] = arrX[i];
	}

	for(int i = x, j = 0; i<x+y; i++, j++){
		arrXY[i] = arrY[j];
	}

	int arrXY2[n+1];

	for(int i = 0;i<x+y; i++){
		cout << arrXY;
	}

	// for(int i=0; i<x+y; i++){
	// 	for(int j = 1; j<=n; j++){
	// 		if(arrXY[i] == j){
	// 			arrXY2[j]++;
	// 		}
	// 	}
	// }
	// for(int i = 1;i<=n;i++){
	// 	if(arrXY2[i] == 0){
	// 		cout << "oh, my keyboard!";
	// 		break;
	// 	}
	// 	else{
	// 		cout << "I become the guy.";
	// 		break;
	// 	}
	// }

}