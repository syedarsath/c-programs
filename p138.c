/*
Prog:138
*/

#include<stdio.h>
int main(){
int i,big,a[10],pos;

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

pos=0;

for(i=0,big=a[i];i<10;i++){

if(big<a[i]){

pos=i;

}
}
printf("The position of the biggest of 10 numbers is:%d",pos);
}