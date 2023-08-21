#include <stdio.h>

int main(){
	int a1, b1, c1;
	scanf("%d %d %d", &a1, &b1, &c1);
	int a2, b2, c2;
	scanf("%d %d %d", &a2, &b2, &c2);
	int d = (a1*b2) - (a2*b1);
	if (d == 0){
		printf("X and Y are infinite");
	} else {
		float x = ((b2*c1) - (b1*c2))/d;
		float y = ((a1*c2) - (a2*c1))/d;
		printf("%f, %f", x, y);
	}
	return 0;
}
