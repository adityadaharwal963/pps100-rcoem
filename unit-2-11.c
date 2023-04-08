/*Write a program to enter a year and to check if the year is a leap year or not. (using if
else, nested if else, else if ladder)*/
#include <stdio.h>
int checkleapyear(int n)
{
    // 0 not leap year
    // 1 leap year
    if (n % 4 == 0)
    { // check year is divisibke by 4
        if (n %100 == 0)
        {// if divisible by 100 check divisble by 400
            if (n % 400 == 0)
            {// skip year if not divisible by 400
                return 1;
            }
            else{
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
      return 0;
    }
}
int main(){
    int n;
    printf("enter year to check:");
    scanf("%d",&n);                         // rad year
    if(checkleapyear(n)){                // if ture
      printf("%d is a leap year", n);
}
else{                                        //if false
  printf("%d is not a leap year", n);
}
}