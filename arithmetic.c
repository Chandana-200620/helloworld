#include<stdio.h>
int main(){
    int i,arr[10]={1,2,3,4,5,6},n=6,*ptr;
    ptr=arr;
    for(i=0;i<=n;i++){
        printf("Value:%d\n",*(ptr+i));
        printf("Address:%p\n",(ptr+i));
    }
}
Value:1
Address:0x7ffe4fcf3690
Value:2
Address:0x7ffe4fcf3694
Value:3
Address:0x7ffe4fcf3698
Value:4
Address:0x7ffe4fcf369c
Value:5
Address:0x7ffe4fcf36a0
Value:6
Address:0x7ffe4fcf36a4
Value:0
Address:0x7ffe4fcf36a8
