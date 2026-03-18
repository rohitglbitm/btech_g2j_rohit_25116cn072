#include <stdio.h>
int main() {
    
    int i,n,table=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("%dx%d=%d\n",n,i,table);
    }
    return 0;
}