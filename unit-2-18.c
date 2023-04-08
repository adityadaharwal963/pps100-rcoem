/*Write a C program to find the commission on a salesman's total sales. 
The commission on a salesman’s total sales is as follows: a) If sales <100, then there is 
no commission. b) If 100>=sales <=500, then commission = 10% of sales. c) If sales > 
500, then commission = 100+8% of sales above 500. Display details of salesman .*/


#include <stdio.h>
int main(){
    float com;
    char name[20];
    int sales;
    printf("enter name of salesman:");
    scanf("%s",name);
    printf("enter sales:");
    scanf("%d",&sales);
    if(sales<100){
        com=0;
        printf("salesman name:%s\nsales:%d\n commission:%f",name,sales,com);
    }
    else if(sales<500 && sales>=100){
        com=sales/10;
        printf("salesman name:%s\nsales:%d\ncommission:%f",name,sales,com);
    }
    else if(sales>=500){
        com=sales*0.8 +100;
        printf("salesman name:%s\nsales:%d\ncommission:%f",name,sales,com);
    }
    return 0;

}