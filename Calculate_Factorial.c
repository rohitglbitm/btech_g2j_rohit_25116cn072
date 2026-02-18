#include <stdio.h>
int main() {
    
    int n, i, f=1
    ;
    
    printf("FACTORIAL CALCULATOR\n");

    printf("Enter the number: ");
    scanf("%d", &n);
    
    i=1;
    while(i<=n)
    {
        f=i*f;
        i++;
    }
    printf("%d", n);
    printf("!=%d", f);
    return 0;
}