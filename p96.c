/*
Prog:96
*/

#include<stdio.h>
int main(){
int i,cu,cl,cs,csp;
char ch[100];

i=0;
cu=0;
cl=0;
cs=0;
csp=0;

scanf("%c",&ch[i]);

while(ch[i]!='$'){

if(ch[i]>=65 && ch[i]<=90){

cu=cu+1;
}

else if(ch[i]>=97 && ch[i]<=122){

cl=cl+1;

}else if(ch[i]>=48 && ch[i]<=57){

cs=cs+1;

}else{

csp=csp+1;
}
i++;
scanf("%c",&ch[i]);
}
printf("cu=%d\ncl=%d\ncs=%d\ncsp=%d",cu,cl,cs,csp);

}