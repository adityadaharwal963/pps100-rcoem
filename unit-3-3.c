/*Write a C program to multiply a matrix of size m x n with a vector of size n x 1.*/
#include <stdio.h>

int main(){
    int m1,n1,m2,n2=1;
printf("enter size of matrix1 m n");
scanf("%d %d",&m1,&n1);
m2=n1;
    int a[m1][n1], b[m2][n2];
    int k=0;
int mul[n1][m2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter in matrix 2:\n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
        scanf("%d",&b[i][j]);
    }
    }
    for(int i=0;i<m2;i++){
        k=0;
        for(int j=0;j<n1;j++){
                  mul[i][j]=0;    
         while(k<m2){   
         mul[i][j]=mul[i][j]+ a[i][k]*b[k][j];
        k++;
        }
        }
       
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
        printf("%d ",mul[i][j]);
    }
    }


    return 0;
}

