/*Write a program to find the average marks of the subject by using goto statement 
without using for, while and do while loop.*/
#include <stdio.h>
int main(){
    int n, i=0,sum=0,marks;
    
    printf("enter no. fo students\n");
        scanf("%d",  &n);
       printf("enter marks of students\n");
      
          loop:
          scanf("%d",&marks);
          sum= sum +marks;
          i++;
          if(i<n){
            goto loop ;
          }
         
       printf("average marks  is %d",sum/n);
}