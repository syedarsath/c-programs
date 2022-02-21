/*
Prog:157
*/

#include<stdio.h>
int main(){
int i;
char ch[i];


for(i=0,scanf("%c",&ch[i]);ch[i]!='\n';i++,scanf("%c",&ch[i]));
ch[i]='\0';

printf("________________________________________\n");

for(i=0;ch[i]!='\0';i++){
printf("%c",ch[i]);
}
printf("\n"); }