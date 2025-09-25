#include <stdio.h>

int main() {
    float angle1, angle2, angle3, sum;
    printf("Enter three angles of a triangle:\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The angles form a valid triangle.\n");
    } else {                     
        printf("The angles do NOT form a valid triangle.\n");
    }
    return 0;
}