/*
Prog:165
*/

#include<stdio.h>
int main(){
int i,j,n,l;
char ch[100],b[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
printf("How many last n characters you wanna print,n=");
scanf("%d",&n);
l=0;
for(i=0;ch[i];l=i,i++);

printf("___________________________________________________\n");

for(j=0,i=l-n+1;ch[i];b[j]=ch[i],j++,i++);;
b[j]='\0';
for(j=0;b[j];putchar(b[j]),j++);
printf("\n");

}