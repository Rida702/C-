#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Nested Loop
	int i , j;
	for (j=1;j<=5;j++){
		printf ("{");
		for (i=1;i<5;i++){
			printf ("(%d)", i);
			if (i<4)
				printf(",");
		}
		printf ("}");
		printf("\n");
	}
	return 0;
}


