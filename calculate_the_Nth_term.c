#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) {
    int arr[n]; // crating array to storing sum

    arr[0] = a; arr[1] = b; arr[2] = c;
    if (n <= 3) { 
        return arr[n - 1]; // return directly if n<4
    }
    for (int i = 3; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3]; //calculating nth term if n>3
    }
    return arr[n - 1]; //return nth term if n>3
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
