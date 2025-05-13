#include <stdio.h>

int main() {
int n,t1=0,t2=1,next_term;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Fibbonacci series is:");
for(int i=0;i<n;i++){
    printf("%d",t1,t2);
next_term=t1+t2;
t1=t2;
t2=next_term;
}
}
Enter the value of n:10
Fibbonacci series is:0112358132134
