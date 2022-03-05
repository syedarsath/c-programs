/*
Prog:173
*/
#include<stdio.h>
int main(){
int i,n;
char ch[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

for(i=0,n=0;ch[i];i++){

if(ch[i]=='\n'){

n=n+1;

}
}
n=n+1;
printf("The number of lines=%d\n",n);

}

