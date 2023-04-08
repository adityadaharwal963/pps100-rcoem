#include <stdio.h>
void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;                 // swap address x and y
}
int main(){
    int a[100],coun,*temp,i1=0;
    printf("enter element in array and -1 to exit.\n");
//////////////////////////////////////////
     do
    {
        scanf("%d",(a+i1));
        i1++;
    } while (a[i1-1]!=-1);
//////////////////////////////////////////    

    coun=i1;
 /// ascending order
    for(int i=0;i<coun;i++){
        for(int j=0;j<coun-1;j++)
            if(*(a+j)>*(a+j+1)){
                 swap((a+j),(a+j+1));
            }
    }

    //display array
    for(int i=0;i<coun;i++){
        printf("%d ",*(a+i));
    }

return 0;
}
