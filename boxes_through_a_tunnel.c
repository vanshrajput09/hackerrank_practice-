#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int height;
    for (int i = 0; i < n; i++) {
        scanf("%d", &height);
        if (height < k) {
            printf("%d\n", height);
        }
    }

    return 0;
}
