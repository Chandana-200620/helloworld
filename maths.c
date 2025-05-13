#include <stdio.h>
int a,b,sum,diff,pro,quo;
int main(){
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    printf("The sum is %d\n",sum);
    printf("The difference is %d\n",diff);
    printf("The product is %d\n",pro);
    printf("The quotient is %d\n",quo);
    
}
Enter the value of a and b:10 2
The sum is 12
The difference is 8
The product is 20
The quotient is 5
