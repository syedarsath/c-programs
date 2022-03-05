/*
Prog:177
*/

#include<stdio.h>
int main(){
int l,i,j,k,m,n,a[100];
char ch[100],b[100];


for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
printf("How many lines:");
scanf("%d",&n);
printf("From which line:");
scanf("%d",&m);

for(j=0,i=0,a[j]=i;ch[i];i++){

if(ch[i]=='\n'){

j++;
a[j]=i+1;

}
}
l=a[m+n-1];

for(i=a[m-1],k=0;i<l && ch[i]!='\0';i++,k++){

b[k]=ch[i];

}
b[k]='\0';

for(k=0;b[k];putchar(b[k]),k++);
printf("\n");

}