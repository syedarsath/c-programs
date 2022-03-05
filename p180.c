/*
Prog:180
*/

#include<stdio.h>
int main(){
int i,j,m,k,l;
char ch[100],b[100],c[100],d[100];

printf("Enter Pattern:\n");
for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

printf("Enter pattern you wanna delete:\n");
for(i=0;(b[i]=getchar())!='$';i++);
b[i]='\0';
printf("__________________________________\n");
for(i=0,l=0;ch[i]!='\0';){

for(k=i,j=0;ch[k]==b[j] && b[j]!='\0';k++,j++);

if(b[j]=='\0'){

i=k;

}else{

c[l]=ch[i];
i++;
l++;

}
}
c[l]='\0';
printf("\n-------Pattern Deleted-------\n");
for(l=0;c[l];putchar(c[l]),l++);
printf("\n");
}