/*
Prog:109
*/

#include<stdio.h>
int main(){
int i,n;
char ch[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}
ch[i]='\0';
i=0;
n=1;

while(ch[i]!='\0'){

if(ch[i]=='\n'){

n=n+1;
i++;

}else{

i++;

}
}

printf("%d",n);
}