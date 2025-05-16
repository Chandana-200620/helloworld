#include <stdio.h>
int main() {
    int i,num,isPrime=1;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<=1){
        isPrime=0;
    }
    for(i=2;i<=num/2;++i){
        if(num%2==0){
            isPrime=0;
        }
    }
    if(isPrime){
        printf("Its a prime number",num);
    }
    else{
        printf("Its not a prime number",num);
    }
}
Enter the number:6
Its not a prime number
Enter the number:5
Its a prime number
