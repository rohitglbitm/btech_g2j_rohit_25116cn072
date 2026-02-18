#include <stdio.h>
int main() {
    
    int n, i;
    
    printf("Enter the last number:");
    scanf("%d", &n);
    
    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}