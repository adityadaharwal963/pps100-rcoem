/*Write a program to display Name, Roll No., Gender, Address and Percentage of 
Previous Examination along with Algorithm and Flowchart.*/

#include <stdio.h>
#define slen 20   // name length 
#define sn 3    // student numbers
struct studentdetails{
    char name[slen];
    int rollno ;
    char  gender[slen];
    char address[slen];
    float percentage;
};

int main(){
    struct studentdetails s[100] ;      
    for(int i=0;i<sn;i++){                          // read student details
        printf("enter student name %d",i+1);
        scanf("%s", s[i].name );
        printf("enter student roll no.");
        scanf("%d", &s[i].rollno);
        printf("enter student address");
        scanf("%s", s[i].address);
        printf("enter student gender (M/F)\n");
        scanf("%s", s[i].gender);
        printf("enter student precentage");
        scanf("%d",&s[i].percentage);
    }  

    for(int i=0;i<sn;i++){                                    //display student details
        printf(" student name %s\n", s[i].name);
        
        printf("student roll no.%d\n", &s[i].rollno);
        
        printf(" student address %s \n", s[i].address);
        
        printf(" student gender %c", &s[i].gender);
      
        printf("enter student precentage %d %\n",&s[i].percentage);
      
    }
   
}