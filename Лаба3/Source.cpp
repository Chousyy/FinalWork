#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Enter  2 numbers\n");
	scanf_s("%d%d", &a, &b);
	if (a >= 0 && b >= 0) { 
		printf("|%d|+|%d| = ", a, b);
		c = a + b;
		printf("%d", c);
	}
	else
		if (a > 0 && b < 0) {
			printf("|%d|+|%d| = ", a, b);
			c = a - b;
			printf("%d", c);
}
	else
			if (a < 0 && b > 0) {
				printf("|%d|+|%d| = ", a, b);
				c = -a + b;
				printf("%d", c);
			}
			else
				if (a < 0 && b < 0) {
					printf("|%d|+|%d| = ", a, b);
					c = -a - b;
					printf("%d", c);
				}
				else
	getchar();
}