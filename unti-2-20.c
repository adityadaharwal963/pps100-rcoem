/*Write a ‘C’ program to take as input 3 floating point numbers. The program then outputs 
the number with largest magnitude (Largest magnitude number is the largest number 
obtained after ignoring the sign).*/
#include <stdio.h>
int mod(int n){
    if(n<0){
    n=-n;
 }
 return n;
}
int main(){

float a,b,c;      //3 floating point numbers
scanf("%f %f %f",&a,&b,&c);
mod(a)>mod(b)?                                      //a>b and a>c
(mod(a)>mod(c)?printf("%f",a):printf("%f",c))
:(mod(b)>mod(c)?printf("%f",b):printf("%f",c));
return 0;
}
 