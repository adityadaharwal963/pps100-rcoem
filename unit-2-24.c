/*Write a C program to print the following pattern:
*
*A*
*B*B*
*C*C*C*
*D*D*D*D*
*E*E*E*E*E*E
... till n lines
where n is the input and it can’t be more than 27*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
printf("enter mayrix 1 elements:");
    for(int i=0;i<n;i++){              //rows
        printf("*");
        for(int j=0;j<i;j++){           
            printf("%c*",64+i);       // 64+rows
        }
        printf("\n");
    }
    return 0;
}