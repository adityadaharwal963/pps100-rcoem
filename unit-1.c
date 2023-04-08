#include <stdio.h>
#define pi 3.14
//1. Write a C program to find the factors of a given integer.
void factors(int n){                   //code to find factor of n
    printf("%d ", n);
    for(int i=n/2;i>0;i--){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}

/*2. What is an operating system? What is its function? Give names of at least three 
operating systems and elaborate differences between them.*/

/**/

/*3. What is the purpose of the main() function? Can we have a program without main()?*/

/**/

/*What are the different types of memories which can be connected to a desktop 
computer ? Describe the features and use of each.*/

//

/**/
 void isprime(int n){
    int flag=0;
    for(int i=n/2;i>1;i--){
        if(n%i==0 || n==2){  // 2 & 1 are prime
            flag=1;          // if composite flag 1    
            break;
        }
    }
    flag==0?printf("no. is prime"):printf("not prime");
 }

 /*Classify C operators based on their utility (action) and number of operands 
required.*/

//

int sarea(int r){                     // function  surface area of sphere
      int a=4*pi*r*r;                 // read radius and use formula ,give output
      return a;
}

//Q8 Write a program to print Data Types in C along with Algorithm and Flowchart
#define isdigit(a)(0>=a && a<9)
#define ischar(ch)((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))

int datatype(char *ptr){
    if(isdigit(*ptr)){
    printf("is integer");
    }
    else if (ischar(*ptr))
    {
        printf("is character");
    }
    else{
        printf("is float");
    }
    
}

int main(){
    int n,r;
    scanf("%d",&n);     //scanf number
     factors(n);       //call function
     isprime(n);

     scanf("%d", &r);
     int area= sarea(r);
     printf("%d", area);
     datatype(n);

}
