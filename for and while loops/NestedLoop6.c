#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Nested Loop
	int i , j;
	for (j=1;j<=5;j++){
		printf ("{");
		for (i=1;i<4;i++)
			printf ("(%d),", i);
		printf("(%d)}\n",i);
	}
	return 0;
}


