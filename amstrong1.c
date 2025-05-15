#include<stdio.h>
int main(){
    int num,result=0,original,remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder=num%10;
        result+=remainder*remainder*remainder;
        num/=10;
    }
    if(result==original){
        printf("%d is the amstrong");
        
    }
    else{
        printf("%dis not a amstrong");
    }
}
Enter the number:153
153 is the amstrong
