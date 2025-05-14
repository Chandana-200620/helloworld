#include <stdio.h>
int main(){
int a[5][5],b[5][5],c[5][5],m,n,i,j;
printf("Enter the order of matrix:");
scanf("%d%d",&m,&n);
printf("Enter the elements of A:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        
    }
}
printf("Enter the elements of B:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        c[i][j]=a[i][j]-b[i][j];
    }
}
printf("The matrix a is:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%5d",a[i][j]);
    }
}
printf("The matrix b is:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%5d",b[i][j]);
    }
}
printf("The matrix c is:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%5d",c[i][j]);
}
}

        


}
Enter the order of matrix:2 2
Enter the elements of A:1 2 3 4
Enter the elements of B:0 2 1 3

The matrix a is:    1    2    3    4The matrix b is:    0    2    1    3The matrix c is:    1    0    2    1
