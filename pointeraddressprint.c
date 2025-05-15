#include <stdio.h>

int main() {
    int a=5;
    int *ptr=&a;
    printf("a is:%d\n",a);
    *ptr=*ptr+10;
    printf(" a is :%d\n",ptr);
}
a is:5
 a is :1566616980
