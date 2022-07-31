#include <stdio.h>

int sumOfSeries(int n){
	int i, sum=0;
	for (i=1;i<=n;i++)
		sum = sum + i;
	return sum;
}
int main(){
	int i;
	printf("%d\n",sumOfSeries(10));
	printf("%d\n",sumOfSeries(5));
	return 0;
}
