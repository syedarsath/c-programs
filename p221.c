//221

#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

int i,m;
char ch[100];
FILE *fp;

fp=fopen(argv[1],"r");

if(argc<2){
printf("Wrong Usage");
return 0;
}

if(fp==NULL){

printf("Error");
return 0;
}

int l=0;
m=1;
for(i=0;(ch[i]=getc(fp))!=EOF;i++){

if(ch[i]=='\n'){
ch[i]='\0';
l++;
printf("Page%d Line%d:%s\n",m,l,ch);
if(l%24==0){
scanf("%d",&m);
}
i=-1;
}}

fclose(fp);
}
