#include<stdio.h>
int main(){
    struct Address{
        char city[50];
        int pin;
    };
    struct Person{
        char name[50];
        struct Address addr;
    };
    struct Person p;
    printf("Enter name:");
    scanf("%s",&p.name);
    printf("Enter city:");
    scanf("%s",&p.addr.city);
    printf("Enter pin:");
    scanf("%d",&p.addr.pin);
    printf("\nPerson details:\n");
    printf("Name:%s\nPin:%d\nCity:%s\n",p.name,p.addr.pin,p.addr.city);
}
Enter name:Chandana
Enter city:Tumkur
Enter pin:572128

Person details:
Name:Chandana
Pin:572128
City:Tumkur

