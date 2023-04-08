
#include <stdio.h>
int main(){
    int n=3,m=3;
    int a[m][n];
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
     }
    

    int t[n][m];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         t[j][i]=a[i][j];
       
    } 
  
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d ",t[i][j]);
    }
    printf("\n");
    }

    return 0;
}