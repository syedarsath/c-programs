/*
Prog:70
Aim:Read ten num and find the sum of ten nuum in given array
*/
#include<stdio.h>
int main(){
int i,sum,a[10];

i=0;

while(i<10){

scanf("%d",&a[i]);

i=i+1;

}

i=0;
sum=0;

while(i<10){

sum=sum+a[i];

i=i+1;


}
printf("%d",sum);
}