#include <stdio.h>
#include <string.h>
int main() 
{
    char c,s_1[50],s_2[100]; 
    scanf("%c%s\n%[^\n]%*c",&c,s_1,s_2);
    printf("%c\n%s\n%s",c,s_1,s_2);    
    return 0;
}
