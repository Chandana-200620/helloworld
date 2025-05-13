#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>18){
        if(age<30)
        printf("You are an young adult");
    }
}
Enter your age:25
You are an young adult
