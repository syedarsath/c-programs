/*
prog:163
*/

#include<stdio.h>
int main(){
int i,n;
char ch[i],c[i];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
printf("How many characters you wanna print:");
scanf("%d",&n);

printf("____________________________________________\n");

for(i=0;i<n;i++){

c[i]=ch[i];
}
c[i]='\0';
for(i=0;c[i];putchar(ch[i]),i++);
}

