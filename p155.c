/*
prog:156
*/

#include<stdio.h>
int main(){
int i;
char ch[i];

for(i=0,scanf("%c",&ch[i]);ch[i]!='.';i++,scanf("%c",&ch[i]));
ch[i]='\0';
printf("_____________________________________\n");
for(i=0;ch[i]!='\0';i++){
printf("%c",ch[i]);
}
printf("\n_____________________________________\n");
printf("\n");
}