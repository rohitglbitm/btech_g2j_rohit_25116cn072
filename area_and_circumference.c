#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float per;
    printf("enter number of 5 subs:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("the sum of 5 subjects are=%d\n",sum);
    per=sum/5;
    printf("the percentage of sum of 5 sub=%.2f",per);
    return 0;
}
