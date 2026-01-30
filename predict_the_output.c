#include <stdio.h>

void modify(int *p) {
    p = p + 1;
    *p = *(p - 1) + *(p + 1);
}

int main() {
    int arr[] = {5, 10, 15};
    modify(arr);
    printf("%d %d %d", arr[0], arr[1], arr[2]);
    return 0;
}
//output is 5 20 15
