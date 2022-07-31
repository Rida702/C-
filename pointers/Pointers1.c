#include <stdio.h>

int main(){
	int a=10, b=20;
	int *c=&a;// * is used to declare c as pointer variable
	printf("%d\n", *c);// * is used as indirectional operation to indirecly access a
	c=&a;// no need to use * here
	printf("%d\n", *c);//Again * is used as indirectional operation to indirecly access b
	return 0;
}
