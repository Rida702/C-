#include <stdio.h>

int main(){
	//Print array in triangle
	int a[5] = { 6 , 9 , 8 , 2 , 4 };
	int i , j;
	for (i = 0 ;i < 5 ; i++){
		for (j = 4; j >= i ; j--)
			printf ("%d ", a[j]);
		printf ("\n");
	}
	
	return 0;
}
