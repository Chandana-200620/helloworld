#include <stdio.h>
int lar(int a,int b,int c){
    int largest=a;
    
     if(b>largest){
        largest=b;
    }
    if(c>largest){
        largest=c;
    }
    return largest;
}
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int largest=lar(a,b,c);
    printf("The largest is:%d",largest);
    return 0;
}
output:Enter three numbers:20 35 1 
The largest is:35
