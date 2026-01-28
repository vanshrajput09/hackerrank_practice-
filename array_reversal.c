#include <stdio.h>
#include <stdlib.h>   // Required for malloc()

int main()
{
    int num, *arr, i;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));

    // Read array elements
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);   
    }

    // Print array elements in reverse order
    for(i = num - 1; i >= 0; i--)  // loop runs backwards
        printf("%d ", *(arr + i)); // *(arr + i) gives value at index i

    return 0;
}
