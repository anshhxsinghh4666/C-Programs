// WAP tp find roots of Quadractic equation. 
// NOTE : Determinant = b^2-4ac 
//        Root = (-b^2 +- root(b^2-4ac))/2a 

#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Two equal real roots: %.2f\n", root1);
    } else {
        printf("Two complex roots.\n");
        float realPart  = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugate:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
