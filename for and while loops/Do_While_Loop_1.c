#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Do-While 
	int n1, n2;
	srand(time(0));
	do{		
		n1 = rand() % 100;
		n2 = rand() % 100;
		printf ("%d, %d\n", n1, n2);
	}while (n1<n2);
	return 0;
}
