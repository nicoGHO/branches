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

int main() {
    int x, y;
    printf("--------------------\n");
    printf("Simple Calculator\n");
    printf("Made by Nicolás Aguado");
    printf(" Copyright 2024");
    printf("--------------------\n");
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("--------------------\n");
    printf("Results\n");
    printf("--------------------\n");
    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", subtract(x, y));
    printf("Product: %d\n", multiply(x, y));
	if (x != 0)	
		printf("Division: %d\n", divide(x, y));
	else
		printf("Division cannot be performed because b = 0\n");
	
    return 0;
}
