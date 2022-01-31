/*
Prog:110
*/

#include<stdio.h>
int main(){
int i,j,b[100];
char ch[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}
ch[i]='\0';
i=0;
j=0;
b[j]=i;
j++;

while(ch[i]!='\0'){

if(ch[i]=='\n'){

b[j]=i+1;
i++;
j++;

}else{

i++;

}
}

b[j]=-1;
j=0;

while(b[j]!=-1){

printf("%d",b[j]);
j++;

}
}
