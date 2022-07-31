#include <stdio.h>

int main(){
	//Both loops Doing Same Task
	int x = 1;
	while (x<=10){ 
		printf("%d ", x);
		x = x + 1;
	}	
	printf("\n");
	for (x=1;x<=10;x++)
		printf("%d ", x);
	printf("\n");
	return 0;	
}
