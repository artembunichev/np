/* fah -- change Fahrenheit to Degree Celsius. */


#include<stdio.h>

int
main() {
	float x;
	scanf("%f", &x);
	dprintf(1, "%f\n", (x-32) * 5/9);
	return 0;
}
