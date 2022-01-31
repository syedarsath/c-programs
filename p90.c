/*
Prog:90
*/

#include<stdio.h>
int main(){
int i;
char ch[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='.'){

i++;
scanf("%c",&ch[i]);
 
}

ch[i]='\0';
i=0;

while(ch[i]!='\0'){

printf("%c",ch[i]);
i++;

}
}

