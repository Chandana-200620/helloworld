#include <stdio.h>
int marks;
int main(){
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>75)
    {
        printf("Distinction");
    }
    else if(marks>=40){
        printf("Pass");
    }
    else{
        printf("Fail");    
    }
}
Enter the marks:90
Distinction
