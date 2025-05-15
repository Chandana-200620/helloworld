#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    int length=strlen(name);
    printf("The length is :%d\n",length);
    strcpy(name,"Sinchana");
    printf("The copied name is :%s\n",name);
    int compare=strcmp("array","chandana");
    printf("The compared result is %d\n",compare);
}
 output::Enter your name:Chandana
The length is :8
The copied name is :Sinchana
The compared result is -1

