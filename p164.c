/*
Prog:164
*/

#include<stdio.h>
int main(){
int i,m,n,k;
char ch[100],b[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
printf("\n");
printf("How many ch you wanna print:");
scanf("%d",&n);
printf("\nFrom where");
scanf("%d",&m);

k=0;
printf("_______________________________________________________\n");
for(i=m-1;i<(m+n-1);b[k]=ch[i],k++,i++);
b[k]='\0';
for(k=0;b[k];putchar(b[k]),k++);
printf("\n");
}



