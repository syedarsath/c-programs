/*
Prog:140
*/

#include<stdio.h>
int main(){
int i,big,sml,sBig,a[10];

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

for(i=0,big=a[i];i<10;i++){

if(big<a[i]){

big=a[i];

}
}

for(i=0,sml=a[i];i<10;i++){

if(sml>a[i]){

sml=a[i];

}
}


for(i=0,sBig=sml;i<10;i++){

if(sBig<=a[i] && a[i]!=big){

sBig=a[i];

}
}
printf("The second biggest number is %d",sBig);
}