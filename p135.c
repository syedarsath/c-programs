/*
Prog:135
*/

#include<stdio.h>
int main(){
int i,sum,a[100];
float mean;

sum=0;

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

for(i=0;i<10;i++){

sum=sum+a[i];

}

mean=sum/i;

printf("%f",mean);

}