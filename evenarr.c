#include<stdio.h>
void even(int arr[],int size){
    for (int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%6d",arr[i]);
        }
    }
}
int main(){
    int n[]={2,5,8,9,10,12,16,15};   
    int size=6;
    printf("Even numbers in the array are\n:");
    even(n,size);
    return 0;
    
        
    }
    output:Even numbers in the array are
:     2     8    10    12
