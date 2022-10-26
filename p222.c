//222

#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

int i,cu,cl,cs,csp;
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

cu=cl=cs=csp=0;

int l=0;
for(i=0;(ch[i]=getc(fp))!=EOF;i++){


if(ch[i]=='\n'){
ch[i]='\0';
for(i=0;ch[i]!='\0';i++){

if(ch[i]>=65 && ch[i]<=90){

cu=cu+1;

}

else if(ch[i]>=95 && ch[i]<=122){

cl=cl+1;

}

else if(ch[i]>=48 && ch[i]<=57){

cs=cs+1;

}


else{

csp=csp+1;

}}
printf("Line%d Uppercase:%d Lowercase:%d Numbers:%d Spec Char:%d\n",l,cu,cl,cs,csp);
cu=cl=cs=csp=0;
l++;
i=-1;
}}

fclose(fp);
}
