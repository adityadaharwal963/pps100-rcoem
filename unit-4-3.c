/*A 5 digit positive integer is entered through the keyboard. Write a program to calculate 
the sum of digits of the 5 - digit number using recursion.
*/
#include <stdio.h>
int sumdigits(int n){
    int r=n%10;
    int sum=r;
      if(n>0){
        sum= sum+ sumdigits(n/10);
      }
      return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int t= sumdigits(n);
    printf("\n %d",t);
    return 0;
}