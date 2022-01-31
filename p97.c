/*
Prog:97
*/

#include<stdio.h>
int main(){
int i,cw,cl;
char ch[i];


i=0;
scanf("%c",&ch[i]);
cw=0;
cl=0;

while(ch[i]!='$'){

if(ch[i]=='\n'){

cl=cl+1;
i++;

}else if(ch[i]==' '){

cw=cw+cl+1;
i++;

}else{

i++;

}
scanf("%c",&ch[i]);

}
printf("cl=%d\ncw=%d\nch=%d",cl,cw,i);
}