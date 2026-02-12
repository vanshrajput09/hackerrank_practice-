#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);                 
    int s = 2 * n - 1;      

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            int top = i;
            int left = j;
            int bottom = s - 1 - i;
            int right = s - 1 - j;

            int min = top;
            if (left < min){
                min = left;
            }
            if (bottom < min){
                 min = bottom;
            }
            if (right < min){ 
                min = right;
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
