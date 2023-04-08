/*Write a program to find the roots of quadratic equations.*/
#include <stdio.h>
#include <math.h>
int main(){
float a,b,c;            // standard terms in quar eq
float d,s,m;
printf("enter a,b,c in standard quadratic form\n ax^2 + bx + c = 0\n");
scanf("%f %f %f",&a,&b,&c);
d=-b/(2*a);        // sum of roots
m= b*b- (4*a*c);

if(m<0){                
      // for complex roots
    s=sqrt(-m) / (2*a);
printf("complex roots of equation are: %.3f+i(%.3f)  and %.3f-i(%.3f)", d,s,d,s);                        
}
else{                                              
// real roots
s=sqrt(m) / (2*a);
printf("roots of equation are: %.3f  and %.3f", d+s,d-s);
}
return 0;
}

