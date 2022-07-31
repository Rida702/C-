#include <stdio.h>


int main(){
	int x[]={25,36,48,79,40,26,98,73,56,66};
	int *px=x, i;
	for (i=0;i<10;i++, px++)//Moving px to next index
		printf("%d ", *px);//printing array x using pointer px
	printf("\n\n");
	char c[]={'A','F','M','T','U','Q','G','D','S','C','Z'};
	char *pc=c;
	for (i=0;i<10;i++, pc++)//Moving pc to next index
		printf("%c ", *pc);//printing array x using pointer pc
	printf("\n\n");
	return 0;
}
