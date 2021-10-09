/*
Program no:21
Date:27/09/2021
Aim:Read two number and find the smallest of give two numbers
*/
#include<stdio.h>
int main(){
int firstNumber,secondNumber;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);

if(firstNumber<secondNumber){
printf("%d is smallest",firstNumber);

}else{
printf("%d is smallest",secondNumber);
}
}
