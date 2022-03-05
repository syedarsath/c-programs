/*
Prog:179
*/

#include<stdio.h>
int main(){
int i,j,k,n;
char ch[100],b[100];

printf("Pattern 1:\n");
for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

printf("Pattern 2:\n");
for(i=0;(b[i]=getchar())!='$';i++);
b[i]='\0';
n=0;

printf("______________________________________________\n");
for(i=0;ch[i];){

for(k=i,j=0;ch[k]==b[j] && b[j]!='\0';k++,j++);

if(b[j]=='\0'){

n=n+1;
i=k;

}else{

i++;

}
}
printf("The given pattern exists %dtime",n);
printf("\n");
}

