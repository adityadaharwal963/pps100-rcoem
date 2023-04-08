/*Write a user defined function to convert all the upper case letters to lowercase and 
lower case letters to upper case in a given string. Write appropriate main ( ) to 
demonstrate the use of the function above defined.*/

#include <stdio.h>
char u_l_case(char a){                   // funtion for upper case to lower case  and vice-versa
if(a>=97 && a<=122){
    return a-32;
}
if(a>=65 && a<=90){
    return a+32;
}
return 0;
}

char l_u_case(char a){                   // funtion for upper case to lower case  and vice-versa
if(a>='a' && a<='z'){
    return a-32;
}
if(a>='A' && a<='Z'){
    return a+32;
}
return 0;
}
int main(){
    int n;
    char ch;
    scanf("%c",&ch); 
    printf("%c",u_l_case(ch));
    printf("%c",l_u_case(ch));
    return 0;

}