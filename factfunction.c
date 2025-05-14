#include<stdio.h>
int i;
int chand_fact(int n,int fact){
        if(n==0){
        printf("1");
}
else if(n<0){
    printf("Enter the positive number");
}
else{
    for(i=1;i<=n;i++){
        fact*=i;
    
    }
}
return fact;
}
int main(){
    int c;
    c=chand_fact(4,1);
    printf("%d",c);
}
output:24
