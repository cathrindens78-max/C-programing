#include <stdio.h>
int main() {
    char ch1, ch2;
    printf("Enter first character: ");
    scanf(" %c", &ch1);
    printf("Enter second character: ");
    scanf(" %c", &ch2);
     if (ch1 == ch2) {
        printf("The characters are equal.\n");
    } else {
        printf("The characters are not equal.\n");
    }

    return 0;
}
    