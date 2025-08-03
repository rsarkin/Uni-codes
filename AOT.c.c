// Area of a triangle
#include <stdio.h>

int main() {
	float l, b;
	float AOT;
    
	printf("Insert length and breadth of the triangle: ");
	scanf("%f %f", &l, &b);

	AOT = 0.5 * l * b;

	printf("Area of Triangle = %.2f\n", AOT);

	return 0;
}


