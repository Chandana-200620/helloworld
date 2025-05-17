#include <stdio.h>
struct books{
    char name[20];
    int ed;
    char gen[20];
    char author[20];
    
};
int main(){
    int i;
    struct books b[20];
    for(i=0;i<5;i++){
        printf("Enter details %d\n",i+1);
        printf("Enter book name:");
        scanf("%s",&b[i].name);
        printf("Enter author of book:");
        scanf("%s",&b[i].author);
        printf("Enter the edition:");
        scanf("%d",&b[i].ed);
        scanf("%s",&b[i].gen);
    }
    printf("==============================");
    printf("%-20s %-15s %-10s %-15s\n","book name","author","edition","generation");
    printf("-------------------------------------\n");
    for(i=0;i<5;i++){
        printf("%-20s %-15s %-10s %-15s\n",b[i].name,b[i].author,b[i].ed,b[i].gen);
    }
}
    
    

    
