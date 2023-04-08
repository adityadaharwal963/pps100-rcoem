/*Given as input n and m, print the number of digits that are common in n and m. For 
example, if m =123 and n = 133, then output = 2*/
#include <stdio.h>
int main(){
    int m,n;
    int count=0;
    printf(" enter two numbers. :");
     scanf("%d %d",&m,&n);
     while(n>0 && m>0){
        int r1=m%10; 
            m/=10;
            int r2 = n%10;
            n/=10;
            if(r1==r2){        // check digits
             count++;
            } 
           
     }
      printf("%d",count);
     return 0;

}