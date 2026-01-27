#include <stdio.h>

int main() 
{
    int a, b;

    // Read two integers: starting number (a) and ending number (b)
    scanf("%d\n%d", &a, &b);

    // 2D character array to store number names from 0 to 9
    // Each word can have up to 5 characters + 1 null character ('\0')
    char english_words[10][6] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    // Loop from a to b (inclusive)
    for (int i = a; i <= b; i++) {

        // If number is between 1 and 9
        if (i >= 1 && i <= 9) { 
            // Print the corresponding word
            printf("%s\n", english_words[i]);
        }
        else {
            // For numbers greater than 9
            // Check if the number is even or odd
            if (i % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }

    return 0; // End of program
}
