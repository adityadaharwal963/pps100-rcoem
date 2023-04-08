/*Write a C program to compute the addition of all the elements of an array using call by 
reference.*/
#include <stdio.h>
int main(){
    int *a,n,sum=0;
    printf("enter no. of element:");
    scanf("%d",&n);
    printf("enter element in array");
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
        sum=sum+*(a+i);
    }
    printf(" sum is %d",sum);
    return 0;
    

}