/*
Prog:130
*/

#include<stdio.h>
int main(){
int i;
char ch[100];

for(scanf("%c",&ch[i]);ch[i]!='$';scanf("%c",&ch[i])){

i++;

}
ch[i]='\0';

for(i=0;ch[i]!='\0';i++){

printf("%c",ch[i]);

}
}