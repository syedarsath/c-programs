/*
Prog:181
*/

#include<stdio.h>
int main(){
int i,j,k,l,m;
char ch[100],b[100],c[100],d[100];
printf("Enter pattern:\n");
for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='$';

printf("Enter pattern you wanna remove:\n");
for(i=0;(b[i]=getchar())!='$';i++);
b[i]='\0';

printf("Enter pattern you wanna replace:\n");
for(l=0;(c[l]=getchar())!='$';l++);
c[l]='\0';


for(i=0,m=0;ch[i];){

for(k=i,j=0;ch[k]==b[j] && b[j]!='\0';j++,k++);

if(b[j]=='\0'){
i=k;

for(l=0;c[l]!='\0';l++,m++){
d[m]=c[l];
}}
else{
d[m]=ch[i];
i++;
m++;
}
}

d[m]='\0';
printf("-----Pattern Replaced-----\n");
for(m=0;d[m];putchar(d[m]),m++);
printf("\n");
}