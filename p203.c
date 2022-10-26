#include<stdio.h>
int main(){
char ch;

FILE *fp;

fp=fopen("test.c","r");

if(fp==NULL){

printf("Error");
return 0;
}

while((ch=getc(fp))!=EOF){

putchar(ch);
}
fclose(fp);
}