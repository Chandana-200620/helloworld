#include <stdio.h>
#include<math.h>
int main() {
    int i,num,isPrime=1;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<=1){
        isPrime=0;
    }
    int limit=sqrt(num);
    for(i=0;i<=limit;i++){
        if(num%2==0){
        isPrime=0;
        }
    }
    if(isPrime){
        printf("Its a prime number",limit);
    }
    else{
        printf("Its not a prime number",limit);
    }
}
Enter the number:5
Its a prime number
