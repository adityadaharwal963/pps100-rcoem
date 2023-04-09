#include<stdio.h>

int main(){
FILE *fp;
char ch;
int line=0,c=0,b=0;

fp=fopen("fname.txt","r");

if(fp==NULL){
    printf("error\n");
    return 0;
}
while((ch = fgetc(fp))!= EOF){
    c++;
    if(ch==' ' || ch=='\t'){
        b++;
    }
    if(ch=='\n'){
        line++;
    }
}
fclose(fp);
//print the results
return 0;
}
