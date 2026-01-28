#include <stdio.h>

/*
  This function updates two numbers using pointers.
  It replaces:
  a -> sum of a and b
  b -> absolute difference of a and b
*/
void update(int *a, int *b) {

    // Calculate sum of values pointed by a and b
    int c = *a + *b;

    // Calculate difference of values pointed by a and b
    int d = *a - *b;

    // Update the value of a with the sum
    *a = c;

    // If difference is negative, convert it to positive
    if (d < 0) {
        d *= -1;   // make absolute value
    }

    // Update the value of b with absolute difference
    *b = d;
}

int main() {
    int a, b;

    // Pointers pointing to the addresses of a and b
    int *pa = &a, *pb = &b;

    // Read input values
    scanf("%d %d", &a, &b);

    // Call function to update values using pointers
    update(pa, pb);

    // Print updated values
    printf("%d\n%d", a, b);

    return 0;
}
