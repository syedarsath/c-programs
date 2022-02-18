/*
Prg:139
*/

#include<stdio.h>
int main(){
int i,big,sml,bigPos,smlPos,temp,a[10];

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

bigPos=0;

for(i=0,big=a[i];i<10;i++){

if(big<a[i]){

big=a[i];
bigPos=i;

}
}

smlPos=0;

for(i=0,sml=a[i];i<10;i++){

if(sml>a[i]){

sml=a[i];
smlPos=i;

}
}

temp=a[bigPos];
a[bigPos]=a[smlPos];
a[smlPos]=temp;

printf("________________________________________\n");

for(i=0;i<10;i++){

printf("%d\n",a[i]);

}
}