#include<stdio.h>
int main(){
    int x=10;
    int *ptr=&x;
    printf(" The value of X :%d\n",*ptr);
    *ptr=30;
    printf("The value of X is:%d\n",x);
}
output:
The value of X :10
The value of X is:30

