#include <stdio.h>
#define PI 3.1416

// Fun. area of circle
float circleArea(float r) {
    return PI * r * r;
}

// Fun. area of square
float squareArea(float s) {
    return s * s;
}

// Fun. area of rectangle
float rectangleArea(float l, float w) {
    return l * w;
}

// Fun. area of triangle
float triangleArea(float b, float h) {
    return 0.5 * b * h;
}
int main() {
    int choice;
    float area;

    printf("Choose shape to find area:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        float r;
        printf("Enter radius: ");
        scanf("%f", &r);
        area = circleArea(r);
    }
    else if (choice == 2) {
        float s;
        printf("Enter side: ");
        scanf("%f", &s);
        area = squareArea(s);
    }
    else if (choice == 3) {
        float l, w;
        printf("Enter length and width: ");
        scanf("%f %f", &l, &w);
        area = rectangleArea(l, w);
    }
    else if (choice == 4) {
        float b, h;
        printf("Enter base and height: ");
        scanf("%f %f", &b, &h);
        area = triangleArea(b, h);
    }
    else {
        printf("Invalid Choice\n");
        return 0;
    }
    printf("Area = %.2f\n", area);
    return 0;
}
