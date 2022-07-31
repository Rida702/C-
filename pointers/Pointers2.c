#include <stdio.h>

int main(){
	int i;
	int a[]={1,2,3,4,5};
	int b[]={6,7,8,9,10};
	int *c=a;// & ampersand sign not required because a is address of array a
	for (i=0;i<5;i++)
		printf("%d ", c[i]);//Pointer c can be used to access array a
	printf("\n******\n");
	c=b;
	for (i=0;i<5;i++)
		printf("%d ", *(c+i));//Calculate address and using * indirectly access the location
	printf("\n******\n");
	return 0;
}
