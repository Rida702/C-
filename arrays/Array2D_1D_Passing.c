#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Passing 2D as 1D array
int f1(int x[]){
	int i;
	for (i=0;i<12;i++)
		printf("%d ", x[i]);
	printf("\n");
}
//Passing 1D as 2D array
int f2(int x[][4]){
	int i,j;
	for (i=0;i<3;i++){
		for (j=0;j<4;j++)
			printf("%d ", x[i][j]);
		printf("\n");
	}
}
//Passing 1D as 1D but using mapping function printed as 2D array
int f3(int x[], int rows, int columns){
	int i,j;
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++)
			printf("%3d", x[i*columns+j]);
		printf("\n");
	}
}
int main(){
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int b[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	f1(a);
	printf("\n**********\n");
	f2(b);
	printf("\n**********\n");
	f3(b,2,6);
	printf("\n**********\n");
	f3(b,4,3);
	return 0;
}
