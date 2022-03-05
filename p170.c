/*
prog:170
*/

#include<stdio.h>
int main(){
int i,k;
char ch[100],a[100],b[100];

printf("Read Text 1:");

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

printf("\n");
printf("Read Text 2:");

for(i=0;(a[i]=getchar())!='$';i++);
a[i]='\0';

for(k=0,i=0;ch[i];b[k]=ch[i],k++,i++);


for(i=0;a[i];b[k]=a[i],k++,i++);

b[k]='\0';
printf("\nMerged Text:\n");

for(k=0;b[k];putchar(b[k]),k++);
printf("\n");
}
