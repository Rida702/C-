#include <stdio.h>

int main(){
	//Sorting To arrange numbers in some order
	//By default sorting means to arrange numbers
	// in ascending order
	//Bubble Sort
	srand(time(0));
	int a[5], i , j, temp;
	for (i = 0 ;i < 5 ; i++){
		a[i] = rand() % 100;
		printf ("%d ", a[i]);
	}
	printf ("\n");
	for (i = 0 ;i < 4 ; i++){
		for (j = 0; j < 4 ; j++)
			if (a[j] > a[j+1]){	//swap elements
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
	}
	for (i = 0 ;i < 5 ; i++)
		printf ("%d ", a[i]);
	printf ("\n");
	return 0;
}
