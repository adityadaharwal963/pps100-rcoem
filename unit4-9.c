#include<stdio.h>
int solve(int n);
int main(){
    int t;
    scanf("%d",&t);
    printf("%d",solve(t));
    return 0;
}

int solve(int n){
    if(n==0){
        return 0;
    }
    return n+solve(n-1);
}
