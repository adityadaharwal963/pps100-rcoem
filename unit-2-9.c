/*Write a program to enter two no.s (say 8 and 10) and evaluate the expression:
n1+=n2 * 4 – 7
*/
#include <stdio.h>
int main(){
 int n1, n2;
 printf(" enter two no.s (say 8 10)\n");
 scanf("%d %d", &n1,&n2);
 n1+=n2 * 4 - 7;
printf("ans %d %d", n1,n2);
}
