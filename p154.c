/*
Prog:154
*/

#include<stdio.h>
int main(){
int i;
char ch[i];

for(i=0,scanf("%c",&ch[i]);ch[i]!=' ';i++,scanf("%c",&ch[i]));
ch[i]='\0';
for(i=0;ch[i]!='\0';i++){

printf("%c",ch[i]);
}
}