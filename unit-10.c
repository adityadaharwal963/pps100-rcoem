#include  <stdio.h>
int square(int n){     
  int sq= n*n;                     //square of n
  return sq;
}
int sumsquare(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum += square(i);           // sum square of n nos.
    }
 return sum;
}
void square_n_sum(int n){
      int sum=0 ;
for(int i=1;i<=n; i++){
    printf("%d ",i*i);
    sum += i*i;
}
printf("sum of sq is %d",sum);
}
int main(){
    int x;
    scanf("%d" ,&x);
    square_n_sum(x);
    printf("\n%d\n",sumsquare(x));
    return 0;
}