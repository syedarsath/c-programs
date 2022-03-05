/*
Prog:166
*/

#include<stdio.h>
int main(){
int i,j;
char ch[i],a[i];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

for(j=0,i=0;ch[i];i++,j++){
 if(ch[i]>=65 && ch[i]<=90){
 a[j]=ch[i]+32;
 }else{
 a[j]=ch[i];
 }
 }
 printf("__________________________________________\n");
 a[j]='\0';
 for(j=0;a[j];putchar(a[j]),j++);
 }
 
 


