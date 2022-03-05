/*
Prog:176
*/

#include<stdio.h>
int main(){
int i,j,k,n,a[100];
char ch[100],b[100];

for(i=0;(ch[i]=getchar())!='$';i++);
ch[i]='\0';
for(i=0,n=0,a[n]=i;ch[i];i++){

if(ch[i]=='\n'){

n++;
a[n]=i+1;


}
}

printf("Which line you wanna display:");
scanf("%d",&k);

for(i=a[k-1],j=0;ch[i]!='\n';i++){

b[j]=ch[i];
j++;

}
b[j]='\0';

for(j=0;b[j];j++){

putchar(b[j]);
}
}

