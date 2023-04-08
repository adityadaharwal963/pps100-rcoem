/*
WAP to print the following pattern [CO1]
 E D C B A
  D C B A
   C B A
    B A
     A
 */

#include <stdio.h>
 void WAP(int n){
   
for(int t=0;t<n;t++){          // no. pf rows

    for(int j=0;j<t;j++){          // print _  __ ___ ____ 
        printf(" ");
    }
    for(int i=n-t-1;i>=0;i--){          // print alphabets n time  4 3 2 1 0
        printf("%c ",65+i);         // 
    }
    printf("\n");                  // newline
 }
 }

 int main(){
    int n;
    scanf("%d",&n);
    WAP(n);
 }