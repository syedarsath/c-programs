/*
Prog:174
*/

#include<stdio.h>
int main(){
int i,a[100],n;
char ch[100];


for(i=0;(ch[i]=getchar())!='$';i++);

ch[i]='\0';

for(i=0,n=0,a[n]=i,n++;ch[i];i++){

if(ch[i]=='\n'){

a[n]=i+1; 
n++; 
} 
} 
a[n]=-1;
for(n=0;a[n]!=-1;n++){

printf("%d\n",a[n]);

}
}