#include <stdio.h>
#include <math.h>

#define PI 22/7.0

int main(){
	float angle;int angleD=0;
	printf ("Angle  Sin   Cos\n");
	for (angle=0;angle<=2*PI;angle=angle+PI/6, angleD+=30)
		printf ("%d\t%0.3f\t%0.3f\n", angleD, sin(angle), cos(angle));
	return 0;
}
