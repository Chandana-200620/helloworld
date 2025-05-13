#include <stdio.h>
int a,b,c,ch;
int main() {
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:c=a+b;
        printf("The result is %d",c);
        break;
        case 2:c=a-b;
        printf("The result is %d",c);
        break;
        case 3:c=a*b;
        printf("The result is %d",c);
        break;
        case 4:c=a/b;
        printf("The result is %d",c);
        break;
        default:printf("Enter valid number");
        break;
    }
    
}
Enter the value of a and b:2 3

1.Addition
2.Subtraction
3.Multiplication
4.Division
Enter your choice:1
The result is 5
