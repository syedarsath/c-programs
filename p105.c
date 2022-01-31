/*
prog:105
*/

#include<stdio.h>
int main(){
int i,j,l;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);
}
l=i-1;
ch[i]='\0';
i=0;
j=0;

while(ch[i]!='\0'){

b[j]=ch[l];
l--;
i++;
j++;
}
b[j]='\0';
j=0;

while(b[j]!='\0'){

printf("%c",b[j]);
j++;
}
}

