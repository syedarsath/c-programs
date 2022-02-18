/*
Prog:137
*/


#include<stdio.h>
int main(){
int i,sml,a[100];

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}
sml=0;

for(i=0,sml=a[i];i<10;i++){

if(sml>a[i]){

sml=a[i];

}
}

printf("The smallest of 10 numbers is %d",sml);

}