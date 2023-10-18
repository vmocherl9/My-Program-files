#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Ensure that the number is positive
    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit the program with an error code
    }

    while (num >= 10) {
        int last_two_digits = num % 100;

        if (last_two_digits % 2 != 0) {
            count++;
        }

        num =num/10;
    }

    if (num >= 10 && num % 2 != 0) {
        count++;//increases the count by one.
    }

    printf("Total two-digit odd numbers in the number: %d\n", count);

    return 0; // Exit the program
}