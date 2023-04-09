#include <stdio.h>
#define maxStudent 2
struct student{
    int rollno;
   char name[10];
   char department[10];
   char course[10];
   int year;
};
int main(){
    struct student s[450];
    FILE *fp;
    fp=fopen("C:\\Users\\user\\Desktop\\abc.txt","w");
    for(int i=0;i<maxStudent;i++){
        printf("enter Roll no. of sutdent %d : ",i+1);
        scanf("%d",&s[i].rollno);
        printf("\nenter name of sutdent %d : ",i+1);
        scanf("%s",s[i].name);
        printf("\nenter department of sutdent %d : ",i+1);
        scanf("%s",s[i].department);
        printf("\nenter course of sutdent %d : ",i+1);
        scanf("%s",s[i].course);
        printf("\nenter year of sutdent %d : ",i+1);
        scanf("%d",&s[i].year);

    fprintf(fp,"%d %s %s %s %d ",s[i].rollno,s[i].name,s[i].department,s[i].course,s[i].year);
}
int m;
printf("enter year:");
scanf("%d",&m);
fclose(fp);
FILE *f2=fopen("C:\\Users\\user\\Desktop\\abc.txt","r");
 for(int i=0;i<maxStudent;i++){
    printf("\n");
    fscanf(f2,"%d %s %s %s %d ",&s[i].rollno,s[i].name,s[i].department,s[i].course,&s[i].year);
    if(s[i].year==m){
        printf("\n Roll no. of sutdent : %d  ",s[i].rollno);
        printf("\n name of sutdent : %s  ",s[i].name);
        printf("\n department of sutdent : %s",s[i].department);
        printf("\n course of sutdent : %s",s[i].course);
        printf("\n year of sutdent  : %d",s[i].year);
    }
}
fclose(f2);

return 0;
}
