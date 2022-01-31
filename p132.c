/*
Prog:132
*/

#include<stdio.h>
int main(){
int i,cu,cl,cs,csp;
char ch[100];

cu=0;
cl=0;
cs=0;
csp=0;

for(i=0,scanf("%c",&ch[i]);ch[i]!='$';scanf("%c",&ch[i])){

if(ch[i]>=65 && ch[i]<=90){

cu=cu+1;

}else if(ch[i]>=97 && ch[i]<=122){

cl=cl+1;

}else if(ch[i]>=48 && ch[i]<=57){

cs=cs+1;

}else{

csp=csp+1;

}
}

printf("cu=%d \n cl=%d \n cs=%d \n csp=%d",cu,cl,cs,csp);

}


