/*
Prog:162
*/

#include<stdio.h>
int main(){
int i;
char ch[100],b[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
for(i=0;ch[i];b[i]=ch[i],i++);
b[i]='\0';
for(i=0;b[i];putchar(b[i]),i++);
}
