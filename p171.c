/*
Prog:171
*/

#include<stdio.h>
int main(){
int i,j;
char ch[100],b[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

for(i=0,j=0;ch[i];i++,j++){

if(ch[i]=='\n'){
b[j]=';';
j++;
b[j]=ch[i];
}else{
b[j]=':';
j++;
b[j]=ch[i];
}
}
b[j]='\0';
for(j=0;b[j];putchar(b[j]),j++);;
}
