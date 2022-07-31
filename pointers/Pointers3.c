#include <stdio.h>

int main(){
	int i;
	int a=30;
	int *c=&a;
	printf("%d ", c[0]);//Pointer c can be used to access a as first element of some array
	printf("\n******\n");
	return 0;
}
