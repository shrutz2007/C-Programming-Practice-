/*Addition of matrix element*/

#include<stdio.h>
void main(){
    int row,col,i,j,a[5][5],add;
    printf("Enter the value of row and column : ");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix elements : ");
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            scanf("%d",&a[i][j]);
            add=add+a[i][j];
        }
    }
    printf("\nEntered matrix is : ");
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Addi : %d",add);
}