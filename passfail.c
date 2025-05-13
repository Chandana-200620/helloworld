#include <stdio.h>
int marks;
int main(){
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("Passed");
    }
        else{
            printf("Failed");
        }
        
    }
Enter the marks:36
Failed
