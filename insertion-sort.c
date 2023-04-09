#include <stdio.h>

void insertionsort(int a[],int n){
    int t;
  for(int i=0;i<n-1;i++){
    int key=a[i];
   int  j=i-1;
    while(j>=0 && key<a[j]){
        t=a[j];
        a[j]=a[j+1];        /// swap elements
        a[j+1]=t;
        j--;                   // compare pervious elements
    }
  }
}
int main(){
  int a[100],i=0;
  printf("enter element in array and exit by -1:\n");
    do{
        scanf("%d",(a+i));
        i++;  //count array element
    }
    while(*(a+i-1)!=-1);// take input till arr element != -1
  insertionsort(a,i);      
  for(int j=0;j<i-1;j++){          // -1 not included
    printf("%d ", a[j]);
  }
  return 0;
}
