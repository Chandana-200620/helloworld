#include<stdio.h>
int main()
{
    int p,t,r,SI;
    printf("Enter the value of p and t and r");
    scanf("%d%d%d",&p,&t,&r);
    SI=p*t*r/100;
    printf("The simple interest is %d",SI);
}
