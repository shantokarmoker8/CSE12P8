#include <stdio.h>
#define PI 3.1416

int main() {
    // Variables for area calculation
    float length, width, radius, areaRectangle, areaCircle;

    // Variables for arithmetic operations
    float num1, num2;

    // Rectangle area
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    areaRectangle = length * width;
    printf("Area of Rectangle = %.2f\n", areaRectangle);

    // Circle area
    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);
    areaCircle = PI * radius * radius;
    printf("Area of Circle = %.2f\n", areaCircle);

    // Arithmetic operations
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Addition = %.2f\n", num1 + num2);
    printf("Subtraction = %.2f\n", num1 - num2);
    printf("Multiplication = %.2f\n", num1 * num2);
    if(num2 != 0) {
        printf("Division = %.2f\n", num1 / num2);
    } else {
        printf("Division not possible (denominator is 0).\n");
    }

    return 0;
}
