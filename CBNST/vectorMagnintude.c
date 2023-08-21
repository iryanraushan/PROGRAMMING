#include <stdio.h>
#include <math.h>

int main(){
	float a1, a2, a3;
	scanf("%f %f %f", &a1, &a2, &a3);
	float d = (a1*a1) + (a2*a2) + (a3*a3);
	d = sqrt(d);
	printf("%f", d);
	return 0;
}
