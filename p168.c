/*
rpog:168
*/

#include<stdio.h>
int main(){
int i,j;
char ch[100],a[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
for(i=0,j=0;ch[i];i++){

if(ch[i]!=','){
a[j]=ch[i];
j++;

}}
a[j]='\0';
printf("\n___________________________________________\n");

for(j=0;a[j];putchar(a[j]),j++);

}


