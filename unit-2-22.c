/*Write a program, which takes a positive integer as input, and prints which powers of 2 
does the number lie between. For example, the number 269 lies between 28 (256) and 29 
(512). If the input is 269, the output should be 8 9. Borderline cases which are powers of 
2, such as 256, should be aligned to the lower limit of the desired range output, i.e. 28 
(256). You should not use math functions such as pow.*/


//positive integer as input
#include <stdio.h>
int main(){                                    
    int n,t=1;
    int count=0; 
    printf("enter a no.:");
    scanf("%d",&n);            //4
    while(t<n){      
        t=t*2;              //2  4 8 16 32 64 128 256  512
        count++;           // 1 2  3 4  5 6   7    8
    }
    if(t==n){
        printf("%d",count);
    }
    else{
        printf("%d %d",count -1,count);
    }
    return 0;
}