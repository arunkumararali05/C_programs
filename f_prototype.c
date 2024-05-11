#include <stdio.h>

// Function prototype
float calculateRectangleArea(float length, float width);

int main() {
    float length, width, area;

    // Input
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Function call to calculate area
    area = calculateRectangleArea(length, width);

    // Output
    printf("Area of the rectangle = %.2f square units\n", area);

    return 0;
}

// Function definition
float calculateRectangleArea(float length, float width) {
    return length * width;
}
