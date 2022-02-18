/*
Prog:141
8
*/

#include<stdio.h>
int main(){
int i,big,sml,sbig,ssml,temp,a[10];

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

for(i=0,sbig=sml;i<10;i++){

if(sbig<a[i] && a[i]!=big){

sbig=a[i];

}
}


for(i=0,ssml=big;i<10;i++){

if(ssml>a[i] && a[i]!=sml){

ssml=a[i];

}
}

printf("Second Big=%d\nSecond Small=%d",sbig,ssml);

}
