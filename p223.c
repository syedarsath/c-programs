//223

#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

int i,cw,c;
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

c=cw=0;

int l=0;
for(i=0;(ch[i]=getc(fp))!=EOF;i++){


if(ch[i]=='\n'){
ch[i]='\0';
for(i=0;ch[i]!='\0';i++){

if(ch[i]==' '){

cw=cw+1;

}
c=c+1;

}
cw=cw+1;
printf("Line%d Characters:%d Words:%d\n",l,c,cw);
l++;
i=-1;
c=cw=0;
}}

fclose(fp);
}
