#include<stdio.h>
int main(){
    int n,arr[n],sum=0,i;
    printf("Enter the arrary elements n:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
        sum+=arr[n];
        
    }
    printf("Sum=%d\n",sum);
    
}
Enter the arrary elements n:5
Enter the elements:
1
2
3
4
5
Sum=15
