#include <stdio.h>
int main() {
    char arr_1[1000];
    int arr_2[10] = {0};
    scanf("%s", arr_1);

    for (int i = 0; arr_1[i] != '\0'; i++) {
        if (arr_1[i] >= '0' && arr_1[i] <= '9') {
            arr_2[arr_1[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr_2[i]);
    }

    return 0;
}
