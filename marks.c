#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    if(marks>=80)
    {
        printf("Grade:A\n");
    }else if(marks>=75){
        printf("Grade:B");
    } else if(marks>=60){
        printf("Grade:C");
    }else{
        printf("Grade:F");
    }
}
Enter your marks:
90
Grade:A
Enter your marks:
76
Grade:B
Enter your marks:
70
Grade:C
Enter your marks:
12
Grade:F
