/*WAP to print the following pattern 
    A
   B B      
  C D C
 D E E D*/
 #include <stdio.h>
 int main(){
    int n,m,l;
    scanf("%d",&n);
    m=1;l=0;
    for(int i=0; i<n;i++){            // no. of row 
        for(int j=0;j<n-i-1;j++){     // print --- -- -          ---  --
            printf(" ");
        }                                                      //1   1    2    2      3  3  m
        for(int t=0;t<m;t++){         // series 1                a    b    c d   d e
            printf("%c ",65+i+t);
        }                                                     // 0    1    1     2     2  3  l 
        for(int t=l;t>0;t--){         // series2                   b   c     e d
            printf("%c ",65+i+t-1);
        }
    printf("\n");
    if(i%2==0){
        l++;                     // if even  +1 series 2
    }
    else{
        m++;                    // if odd  +1 series 1
    }
 }
 }