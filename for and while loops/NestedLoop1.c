#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Nested Loop
	int i = 1, j = 5, sum;
	for (j=5;j>=1;j--){
		sum=0;
		for (i=1;i<=j;i++){
			printf ("%d ", i);
			sum = sum + i;
		}
		printf(":%d\n", sum);
	}
	

	return 0;
}


