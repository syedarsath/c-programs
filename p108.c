/*
Prog:108
*/
#include<stdio.h>
int main(){
int i,j;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}
ch[i]='\0';
i=0;
j=0;
 
 
while(ch[i]!='\0'){

if(ch[i]==';' || ch[i]==':'){

i++;

}else{

b[j]=ch[i];
i++;
j++;

}
}

b[j]='\0';
j=0;

while(b[j]!='\0'){

printf("%c",b[j]);
j++;

}
}

