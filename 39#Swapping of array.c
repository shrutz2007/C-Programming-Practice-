/*Swapping of array*/

#include<stdio.h>
void main(){
    int n,i,a[100],b[100];
    printf("Ehter the size of array : ");
    scanf("%d",&n);
    printf("\n Enter the array elements : ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered elements are : ");
    for(i=1;i<=n;i++){
        printf("%d",a[i]);
    }
    for(i=1;i<=n;i++){
        b[i]=a[i];
    }
    printf("\nSwapped array is : ");
    for(i=1;i<=n;i++){
        printf("\t %d",b[i]);
    }
}