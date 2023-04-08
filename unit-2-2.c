/*Write a progarm to compute transpose of a m x n matrix. The transpose of a matrix is 
obtained by exchanging the elements of each row with the elements of the 
corresponding column. */
#include <stdio.h>
int main(){
    int arr[100][100], n=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             int tem=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=tem;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}