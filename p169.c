/*
Prog:169
*/
#include<stdio.h>
int main(){
int i,j,k;
char ch[100],a[100];


for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';

for(i=0;ch[i];k=i,i++);
j=0;
for(i=k;i>=0;i--,j++){

a[j]=ch[i];

}

a[j]='\0';

for(j=0;a[j];putchar(a[j]),j++);
}
