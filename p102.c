/*
Prog:102
*/

#include<stdio.h>
int main(){
int i;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}

ch[i]='\0';
i=0;

while(ch[i]!='\0'){

if(ch[i]>=65 && ch[i]<=90){

b[i]=ch[i]+32;
i++;

}else{

b[i]=ch[i];
i++;

}
}

b[i]='\0';
i=0;

while(b[i]!='\0'){

printf("%c",b[i]);
i++;
}
}