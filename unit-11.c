//Write a C program to find whether an entered number is palindrome or not using recursion.
#include <stdio.h>
unsigned count;
int ispalindrome(char a[],int n,int i){
 if(i<n){
    if(a[i]==a[n-i-1] ){
        ispalindrome(a,n,i++);
    }else{
        return 0; 
    } 
    }
 return 1;
}
int countlen(char a[]){
if(a[count]!='\0'){count++;countlen(a);}
return count;
}

int main(){
    char str[120];
    scanf("%s", str);
    int len=countlen(str);
   if(ispalindrome(str,len,0)){
    printf(" yes palindrome");
   }
   else{
    printf("not palindrome");
   }
   return 0;
}