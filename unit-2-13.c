/*Write a program to print all the uppercase and lowercase letters by using for loop, while
loop and do while loop.*/
#include <stdio.h>
int main()
{
    int n = 0;
    for (int i = 0; i < 26; i++)
    {                          // using for loop
        printf("%c ", 65 + i); // upc
    }
    printf("\n");
    for (int i = 0; i < 26; i++)
    {                              // lc
        printf("%c ", 97 + i);
    }
    printf("\n");
    while (n < 26)
    {                          // while loop
        printf("%c ", 65 + n); // upc
        n++;
    }
    printf("\n");
    n = 0;
    while (n <26)
    {
        printf("%c ", 97 + n);
        n++;              // lc
    }
    printf("\n");
    n = 0;
    do                  // do-while loop
    {                   // upc
        printf("%c ", 65 + n);
        n++;
    } while (n < 26);

    printf("\n");
    n = 0;
    do                                   //lc
    {
        printf("%c ", 97 + n);
        n++;
    } while (n <26);
    return 0;
}