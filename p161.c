/*
Prog:161
*/

#include<stdio.h>
int main(){
int i,w,l;
char ch[i];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

w=0;
l=0;

for(i=0;ch[i];i++){

if(ch[i]=='\n'){

l=l+1;
}
else if(ch[i]==' '){
w=w+l+1;
}
}
w=w+1;
l=l+1;

printf("word=%d\nline=%d\nchar=%d",w,l,i);
}
