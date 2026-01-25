#include <stdio.h>
int main() {
    int n, sum=0;
    scanf("%d", &n);
    while(n>0){
        int c=n%10; // use extra variable for hold very last digit of number.
        sum+=c;
        n/=10; // to update value.
    }
    printf("%d",sum);
    return 0;
}
