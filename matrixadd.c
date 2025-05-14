#include<stdio.h>
int main(){
  int row,col,i,j;
  printf("Enter rows and columns:\n");
  scanf("%d%d",&row,&col);
  int a[row][col],b[row][col],sum[row][col];
  for(i=0;i<row;i++){
      for(j=0;j<col;j++){
            printf("Enter the elements of matrix A:");
              scanf("%d",&a[i][j]);
      }
  }
  
      for(i=0;i<row;i++){
          for(j=0;j<col;j++){
               printf("Enter the elements of matrix B:");
                 scanf("%d",&b[i][j]);
          }
      }
  
  
      for(i=0;i<row;i++){
          for(j=0;j<col;j++){
              sum[i][j]=a[i][j]+b[i][j];
          }
      }
      for(i=0;i<row;i++){
          for(j=0;j<col;j++){
              printf("%d",sum[i][j]);
}
printf("\n");
}
return 0;
}
