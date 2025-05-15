#include<stdio.h>
int main(){
    int num,reversed=0,original,remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    if(original==reversed){
        printf("%d is the palindrome");
        
    }
    else{
        printf("%dis not a palindrome");
    }
}
Enter the number:121
121 is the palindrome
