#include <stdio.h>
int i,j;
int mat[2][3]={{1,2,3},{4,5,6}};

int main() {
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",mat[i][j]);
        }
    }
}
1
2
3
4
5
6
