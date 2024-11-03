#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", subtract(x, y));
    printf("Product: %d\n", multiply(x, y));
	if (x != 0)	{
		printf("Division: %d\n", divide(x, y));
        printf("Modular Division: %d\n", mod(x, y));
    }
	else
		printf("Division and modular division cannot be performed because b = 0\n");
	
    return 0;
}
