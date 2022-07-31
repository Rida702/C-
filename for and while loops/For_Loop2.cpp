#include <stdio.h>

int main(){
	//Loop to print table
	int tableNo, i;
	printf("Enter Table No:");
	scanf("%d", &tableNo);
	for (i=1;i<=10;i++)
		//%2d & %3d is used for column formatting
		printf("%d\t%2d\t%3d\n", tableNo, i, tableNo*i);
	return 0;	
}
