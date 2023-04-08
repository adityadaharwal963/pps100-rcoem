/*Write a program that fills a 5 by 5 matrix (2D array) as follows :— upper triangle with 
1 ; diagonal with 0 ; lower triangle with 2.*/
#include <stdio.h>
int main(){
    int m[5][5];
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==j){
            m[i][j]=0;
        }
        else if(i<j){
            m[i][j]=1;                         ;
        }
        else if(i>j){
            m[i][j]=2;
        }
    }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");

    }
}