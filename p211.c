//211
#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
int i;
char ch;
FILE *fp;

if(argc<2){
printf("Wrong Usage");
return 0;
}


for(i=1;i<argc;i++){

fp=fopen(argv[1],"r");

if(fp==NULL){

printf("Error");
return 0;
}


while((ch=getc(fp))!=EOF){

putchar(ch);
}

fclose(fp);
}}