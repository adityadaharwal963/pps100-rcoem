#include <stdio.h>
int main(){
    int *a,i=0,key;
    do{ // input in till a{i-1}!=-1
    scanf("%d",(a+i));
    i++;
    }
    while(*(a+i-1)!=-1);
    printf("enter element to search:");
     scanf("%d",&key);
     for(int j=0;j<i;j++){
        if(a[j]==key){
            printf("element found at %d",j);
            break;
        }
     }
return 0;
}