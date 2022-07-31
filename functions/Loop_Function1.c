#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int innerLoop(int j){
	int i, sum=0;
	for (i=1;i<=j;i++){
		printf ("%d ", i);
		sum = sum + i;
	}
	return sum;
}
int main(){
	//Nested Loop
	int j = 5;
	for (j=5;j>=1;j--){
		printf(":%d\n", innerLoop(j));
	}
	

	return 0;
}


