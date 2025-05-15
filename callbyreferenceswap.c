#include<stdio.h>
int main(){
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;
    printf("Before swap\n");
    printf("a=%d\n",*p1);
    printf("b=%d\n",*p2);
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After swap\n");
    printf("a=%d\n",*p1);
    printf("b=%d\n",*p2);
    
}
Before swap
a=10
b=20
After swap
a=20
b=10
