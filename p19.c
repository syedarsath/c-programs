/*
Program no:19
Date:27/09/2021
Aim:Read a number and classify the given number is positive,negative or zero
*/
#include<stdio.h>
int main(){
int number;

scanf("%d",&number);

if(number>0){
printf("%d is positive",number);
}else if(number<0){
printf("%d is negative",number);
}else{
printf("%d is zero",number);
}
}
