#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n); //take input for length
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); //take input elements of array
    }
    for(int i=0;i<n;i++){
        sum+=arr[i]; // sum of elements
    }
    printf("%d",sum);
    return 0;
}
