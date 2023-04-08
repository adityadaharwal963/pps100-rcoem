/*Write Program to print all Strong number between 1 to 99999. ( Note: If the sum of 
factorial of the digits in any number is equal the given number then the number is called 
as STRONG number.
*/
#include <stdio.h>

int factors(int a){
    int sum=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){sum = sum + i;} 
    }
    if(sum==a){
        return 1;
    }else{
    return 0;
}
}
int factorial(int a){
    int p=1;
    for(int i=1;i<=a;i++){
        p=p*i;
    }
    return p;
}

int strongno(int c){
   int t=c,sum=0;                          // tempory store no.
    while(c>0){
        int r=c%10;
        c=c/10;
        sum= sum + factorial(r);
    }
    if(sum==t){                           // compare no.  
        return 1;
    }else{
    return 0;
}
    
}

int main(){
    for(int i=1;i<=99999;i++){
        if(strongno(i)){
            printf("%d ",i);
        }
    }

    return 0;
}