/*
Prog:159
*/
#include<stdio.h>
int main(){
int i;
char ch[i];

for(i=0;(ch[i]=getchar())!='.';i++);
ch[i]='\0';
for(i=0;ch[i];i++){
putchar(ch[i]);
}
}