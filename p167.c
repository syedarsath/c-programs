/*
Prog:167
*/

#include<stdio.h>
int main(){
int i,j;
char ch[100],a[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
for(j=0,i=0;ch[i];i++,j++){

if(ch[i]==','){

a[j]=';';

}else{

a[j]=ch[i];

}
}
printf("______________________________________\n");

a[j]='\0';
for(j=0;a[j];putchar(a[j]),j++);

printf("\n______________________________________\n");}

