#include <stdio.h>
#include <math.h>

int main() {
	int a1, b, c;
	printf("Enter  2 numbers\n");
	scanf_s("%d%d", &a1, &b);
	if (a1 >= 0 && b >= 0) { 
		printf("|%d|+|%d| = ", a1, b);
		c = a1 + b;
		printf("%d", c);
	}
	else
		if (a1 > 0 && b < 0) {
			printf("|%d|+|%d| = ", a1, b);
			c = a1 - b;
			printf("%d", c);
}
	else
			if (a1 < 0 && b > 0) {
				printf("|%d|+|%d| = ", a1, b);
				c = -a1 + b;
				printf("%d", c);
			}
			else
				if (a1 < 0 && b < 0) {
					printf("|%d|+|%d| = ", a1, b);
					c = -a1 - b;
					printf("%d", c);
				}
				else
	getchar();
}