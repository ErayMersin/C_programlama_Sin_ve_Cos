#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	float x, sonucsin, sonuccos,mutlaks,mutlakc;

	printf("Derece Girin: ");
	scanf_s("%f", &x);

	sonucsin = sin(x);
	mutlaks = fabs(sonucsin);
	printf("Sin: %f\n", mutlaks);

	sonuccos = cos(x);
	mutlakc = fabs(sonuccos);
	printf("Cos: %f", mutlakc);

	return 0;
}