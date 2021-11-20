/*
Prog:71
Aim:Read 10 num and find mean of ten num int the given array
*/
#include<stdio.h>
int main(){
int i,n,sum,a[10];
float mean;

i=0;

while(i<10){

scanf("%d",&a[i]);

i=i+1;

}
i=0;
sum=0;
n=0;

while(i<10){

sum=sum+a[i];

i=i+1;

}
mean=sum/i;
printf("%f",mean);
}