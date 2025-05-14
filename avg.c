#include <stdio.h>

    int n=10,i,sum=0;
    int average()
{
    int arr[n];
    for ( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=sum/n;
    return avg;
    }
  int main(){
      printf("Enter the elements:");
      int r=average();
      printf("Average is :%d",r);
      return 0;
  }

Enter the elements:1 2 3 4 5 6 7 8 9 1
Average is :4
