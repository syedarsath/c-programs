#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

int i,k,j;
char ch[100],a[i];
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
for(i=0;(ch[i]=getc(fp))!=EOF;i++){
if(ch[i]=='\n'){
ch[i]='\0';
for(i=0;ch[i]!='\0';){
j=0;
k=i;

while(ch[k]==argv[2][j] && argv[2][j]!='\0'){
k++;
j++;
}
if(argv[2][j]=='\0'){
printf("\nLine %d :%s\n",l,ch);
}
l++;
i=-1;
}}}
fclose(fp);
}

