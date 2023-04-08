/*Write a program to perform arithmetic operations such as ‘+’, ‘-’, ‘*’, ‘/’, ‘%’ on values 
entered by user.*/
#include <stdio.h>
int main(){
    int a,b,n;
    printf("\n \n enter your choice \n1. +\n2. -\n3. *\n4. /\n5. % \n6. exit \n");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("enter2 no. to add ");
        scanf("%d %d",&a,&b);
        printf("ans %d", a+b);
        break;
        case 2:
        printf("enter2 no. to subtract");
         scanf("%d %d",&a,&b);
        printf("ans %d", a-b);
        break;
        case 3:
        printf("enter2 no. to multiple ");
         scanf("%d %d",&a,&b);
        printf("ans %d", a*b);
        break;
        case 4:
        printf("enter2 no. to divide");
         scanf("%d %d",&a,&b);
        printf("ans %d", a/b);
        break;
        case 5:
        printf("enter2 no. to find remainder ");
         scanf("%d %d",&a,&b);
        printf("ans %d", a%b);
        break;
        case 6:
        return 0;
        break;
        default :
        printf("enter correct choice");
    }
    main();
    return 0;
}
