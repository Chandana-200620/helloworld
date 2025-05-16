#include<stdio.h>
struct Student{
    char name[50];
    int marks;
    
};
int main(){
    struct Student s[4];
    float total=0,avg;
    for(int i=0;i<4;i++){
        printf("Enter name of student:\n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter marks of %s:",s[i].name);
        scanf("%d",&s[i].marks);
        total+=s[i].marks;
    }
    avg=total/4;
    printf("\n Student details:\n");
    for(int i=0;i<4;i++){
        printf("name:%s,marks:%d\n",s[i].name,s[i].marks);
        
    }
    printf("Average marks=%.2f\n",avg);
}
    Enter name of student:
chandana
Enter marks of chandana:90
Enter name of student:
sinchana
Enter marks of sinchana:85
Enter name of student:
divya
Enter marks of divya:86
Enter name of student:
navya
Enter marks of navya:69

 Student details:
name:chandana,marks:90
name:sinchana,marks:85
name:divya,marks:86
name:navya,marks:69
Average marks=82.50
