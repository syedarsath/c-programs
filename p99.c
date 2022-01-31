/*
Prog:99
*/
#include<stdio.h>
int main(){

int i,n;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){
i++;
scanf("%c",&ch[i]);
}

printf("Display frist n characters,n=");
scanf("%d",&n);

ch[i]='\0';
i=0;

while(i<=n){

b[i]=ch[i];
i++;
}

b[i]='\0';
i=0;

while(b[i]!='\0'){

printf("%c",b[i]);
i++;
}
}