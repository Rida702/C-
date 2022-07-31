#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x[2][6], i, j, temp	;
	srand(time(0));
	for (i=0;i<2;i++){
		for (j=0;j<6;j++){
			x[i][j] = rand()%100;
			printf("%2d ", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
