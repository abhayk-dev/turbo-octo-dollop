
#include <stdio.h>
#include <math.h>

int main(void) {
    double n;
    double coefficient;
    double new_power;

    printf("Enter the power n for f(x) = x^n: ");

    if (scanf("%lf", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    coefficient = n;
    new_power = n - 1;

    printf("Original function: x^%.2g\n", n);
    printf("Derivative: %.2g * x^%.2g\n", coefficient, new_power);

    return 0;
}
